#include <stdio.h>
int maze(int n, int m)
{
    int right = 0;
    int down = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    if (n == 1)
    {
        right += maze(n, m - 1);
    }
    if (m == 1)
    {
        down += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        right += maze(n, m - 1);
        down += maze(n - 1, m);
    }

    int total = right + down;
    return total;
}

int main()
{
    int n;
    printf("enter rowa = ");
    scanf("%d", &n);
    int m;
    printf("enter columns = ");
    scanf("%d", &m);
    int noofways = maze(n, m);
    printf("%d", noofways);
    return 0;
}