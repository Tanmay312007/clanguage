#include<stdio.h>
int main()
{
    int l;
    printf("Enter length of Rectangle = ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth of Rectangle = ");
    scanf("%d",&b);
    int p = 2 * (l + b);
    int a = l * b;
    if (p>a)
    {
        printf("Perimeter is Greater Than Area");
    }
    if (a>p)
    {
        printf("Area is Greater Than Perimeter");
    }
    
     
    return 0;
}