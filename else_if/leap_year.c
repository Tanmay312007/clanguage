#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year = ");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("Leap year"); 
    }
    else {
        printf("Not a Leap Year");
    }
    
    return 0;
}