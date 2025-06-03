#include <stdio.h>
int main()
{
    int n;
    printf("enter first number = ");
    scanf("%d", &n);
    int m;
    printf("enter second number = ");
    scanf("%d", &m);
    n = n + m;
    m = n - m;
    n = n - m;
    printf("the value of n is = %d\n", n);
    printf("the value of m is = %d", m);

    return 0;
}