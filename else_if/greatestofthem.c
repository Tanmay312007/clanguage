#include <stdio.h>
int main()
{
    int n;
    printf("Enter the first number = ");
    scanf("%d", &n);
    int m;
    printf("Enter the second number = ");
    scanf("%d", &m);
    int p;
    printf("Enter the third number = ");
    scanf("%d", &p);
    if (n > m && n > p)
    {
        printf("%d is the greatest", n);
    }
    if (m > n && m > p)
    {
        printf("%d is the greatest", m);
    }
    if (p > m && n < p)
    {
        printf("%d is the greatest", p);
    }
    return 0;
}