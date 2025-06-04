#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int n;
    printf("enter first number = ");
    scanf("%d", &n);
    int m;
    printf("enter second number = ");
    scanf("%d", &m);
    swap(&n, &m);
    printf("the value of n is = %d\n", n);
    printf("the value of m is = %d", m);

    return 0;
}