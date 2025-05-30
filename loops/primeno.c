#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number = ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("1 is neither prime or composite");
    else if (a == 0)

        printf("Given Number is Prime");
    else
        printf("Given Number is Composite");

    return 0;
}