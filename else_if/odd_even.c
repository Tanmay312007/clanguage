#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number = ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Even Number"); 
    }
   /*  if (n%2!=0)
    {
        printf("Odd Number");
    }
     */
    else {
        printf("Odd Number");
    }
    
    return 0;
}