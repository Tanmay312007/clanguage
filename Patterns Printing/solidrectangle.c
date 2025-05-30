#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Length : ");
    scanf("%d",&n);
    int m;
    printf("Enter A Height : ");
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for (int i = 0; i <= n; i++)
    {
        printf("*");
    }
     printf("\n");
    }
    return 0;
}