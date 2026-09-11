// #include <stdio.h>

// int main()
// {
// int a, b, temp;
// printf("Enter value of a: ");
// scanf("%d", &a);
// printf("Enter value of b: ");
// scanf("%d", &b);
// temp = a;
// a = b;
// b = temp;
// printf("After swapping: a = %d, b = %d\n", a, b);
// return 0;

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);

    return 0;
}
