#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    // if (n % 5 == 0 || n % 3 == 0)
    
    //     if (n % 15 != 0){

    //         printf("Number is Divisble By 3 Or 5 but not 15");
    //     }
    //     else{
    //         printf("Number is divible by 15");
    //     }
    // else
    if ((n%3==0 || n%5==0) && n%15!=0)
    {
        printf("Number is Divisble By 3 Or 5 but not 15");
    }
    
    {
        printf("Number does not match the required condition ");
    }
    return 0;
}