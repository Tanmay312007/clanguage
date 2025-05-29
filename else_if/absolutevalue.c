#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number = ");
    scanf("%d",&x);
    if (x<0)
    {
        x = x * (-1);
    }
    printf("The Absolute Value Will Be = %d",x);
    
    return 0;
}