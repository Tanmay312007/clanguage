#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if (n%5==0 || n%3==0)
    {
        printf("Number is Divisble By 3 Or 5");
    }
    else{
        printf("Number is not Divisble By 3 Or 5");
    }
    return 0;

}