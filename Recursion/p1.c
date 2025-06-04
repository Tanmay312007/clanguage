#include <stdio.h>
void greeting(int n)
{
    if (n == 0) return;
    printf("%d\n",n);
    greeting(n - 1);
    return;
}
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);
    greeting(a);
    return 0;
}