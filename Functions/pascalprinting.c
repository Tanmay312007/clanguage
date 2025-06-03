#include <stdio.h>
int fact(int x)
{
    int facto = 1;
    for (int i = 2; i <= x; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    int a = n;
    for (int i = 0; i <= n; i++)
    {

        for (int k = 1; k <= a - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }

    return 0;
}