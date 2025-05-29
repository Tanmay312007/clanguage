#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("Three digit Number");
    }
    else{
        printf("Not a Three Digit Number");
    }
    return 0;

}