#include <stdio.h>
int main()
{
    int a = 5784;
    int* x = &a;
    *x = 7;
    printf("%d\n", *x);
    return 0;
}