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
int main()
{
    int n;
    printf("enter n = ");
    scanf("%d", &n);
    int r;
    printf("enter r = ");
    scanf("%d", &r);
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);
    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}