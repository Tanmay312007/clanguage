#include <stdio.h>
int main()
{
    int n, m;
    printf("enter number = ");
    scanf("%d %d", &n, &m);
    int power = 1;
    for (int i = 1; i <= m; i++)
    {
        power = power * n;
    }

    printf("%d raised to the power %d is %d", n, m, power);
    return 0;
}