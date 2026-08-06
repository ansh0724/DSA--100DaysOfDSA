#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> height = {3,5,1,9,5,7,4,6};

    int st = 0;
    int end = height.size() - 1;
    int maxWater = 0;

    while (st < end) {

        // Current area
        int area = min(height[st], height[end]) * (end - st);

        // Update maximum area
        maxWater = max(maxWater, area);

        // Move the pointer with smaller height
        if (height[st] < height[end]) {
            st++;
        } else {
            end--;
        }
    }

    cout << "Maximum Water = " << maxWater;

    return 0;
}

// int main()
// {
//     vector<int> height = {3,5,1,9,5,7,4,6};
//     int area =0;
//     int st = 0;
//     int end = height.size() - 1;
//     int maxWater = 0;
//     for(int i =0;i<height.size();i++){
//         for(int j=1;j<height.size();j++){
//             area = min(height[i],height[j])*(j-i);
//             maxWater = max(maxWater,area);
//         }
//     }
//     cout << maxWater;
// }