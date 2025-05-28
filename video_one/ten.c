#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your first number = ");
    scanf("%d",&a);
    printf("Enter your second number = ");
    scanf("%d",&b);
    int r = a % b;
    printf("Your remainder is = %d",r);
}