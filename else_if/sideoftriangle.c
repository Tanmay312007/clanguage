#include <stdio.h>
int main()
{
    int n;
    printf("Enter the first side = ");
    scanf("%d", &n);
    int m;
    printf("Enter the second side = ");
    scanf("%d", &m);
    int p;
    printf("Enter the third side = ");
    scanf("%d", &p);
    if ((n + m) > p && (n + p) > m && (p + m) > n)
    {
        printf("Can be The sides of Triangle");
    }
    else{
        printf("Can't be the sides of triangle");
    }
}