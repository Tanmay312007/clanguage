#include <stdio.h>
int main()
{
    int x, y;
    printf("enter x= ");
    scanf("%d", &x);
    printf("enter y = ");
    scanf("%d", &y);
    if (y == 0 && x == 0)
    {
        printf("Points Lies On The Origin");
    }
    else if (x == 0)
    {
        printf("Points Doest Lie On The Y Axis");
    }
    else if (y == 0)
    {
        printf("Points Doest Lie On The X Axis");
    }
    else
    {
        printf("Points Doest Not Lie On Any Axis");
    }
}