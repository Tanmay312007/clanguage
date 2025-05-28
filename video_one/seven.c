#include<stdio.h>
int main()
{
    float radius;
    printf("Enter Radius = ");
    scanf("%f",&radius);
    float pie = 3.1415;
    float area = pie * radius * radius;
    printf("The area of the circle is : %f",area);
    return 0;
}