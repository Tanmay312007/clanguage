#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Length : ");
    scanf("%d", &n);
    int a=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("* ");
        }
        a++;
        printf("\n");
    }

    return 0;
}