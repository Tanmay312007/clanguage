#include <stdio.h>
int main()
{
    int n, m, p;
    printf("Enter the first number = ");
    scanf("%d", &n);
    printf("Enter the second number = ");
    scanf("%d", &m);
    printf("Enter the third number = ");
    scanf("%d", &p);
    if (n>m)
    {
        if (n>p)
        {
            printf("%d is the greatest number",n);
        }
        else{
            printf("%d is the greatest number",p);
        }
    }
    else{
        if (m>p)
        {
          printf("%d is the greatest number",m);  
        }
        else{
            printf("%d is the greatest number",p);
        }
    }
    
    return 0;
}