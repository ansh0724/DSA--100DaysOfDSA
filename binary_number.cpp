#include <iostream>
using namespace std;
int main()
{
    int num = 42;
    int digit;
    int result = 0, place = 1;
    while (num > 0)
    {
        int digit = num % 2;
        result = result + digit * place; // place value pe daal
        place = place * 10;
        num = num / 2;
    }
    cout << result;
}