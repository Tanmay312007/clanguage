#include <stdio.h>
int main()
{
    int i;
    printf("enter number = ");
    scanf("%d", &i);
    int sum = 0;
    int lastdigit = 0;

    while (i != 0)
    {
        i = i / 10;
        if (i != 0)
        {
            lastdigit = i % 10;
            sum = sum + lastdigit;
            i = i / 10;
        }
    }
    printf("Sum of the digits is %d", sum);
    return 0;
}