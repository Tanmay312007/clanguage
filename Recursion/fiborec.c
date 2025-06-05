#include <stdio.h>
int fibo(int a)
{
    if (a==1 || a==2)
    {
        return 1;
    }
    
    int ans1 = fibo(a - 1);
    int ans2 = fibo(a - 2);
    int ans = ans1 + ans2;
    return ans;
}
int main()
{
    int a;
    printf("enter base = ");
    scanf("%d", &a);
    printf("%d", fibo(a));
    return 0;
}