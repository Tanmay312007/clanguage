#include <stdio.h>
int main()
{
    int n;
    printf("enter number = ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("Fibnacci Number is %d", sum);
    return 0;
}