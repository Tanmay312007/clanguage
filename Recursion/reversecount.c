#include <stdio.h>
void increasing(int n)
{
    if (n == 0) return; 
    increasing(n - 1);
    printf("%d\n",n);
    return;
}
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);
    increasing(a);
    return 0;
}