#include <stdio.h>
int factorial(int n)
{
    if (n==1 || n==0)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);
    int fact = factorial(a);
    printf("%d ", fact);
    return 0;
}