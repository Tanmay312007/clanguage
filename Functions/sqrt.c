#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a number = ");
    scanf("%d",&a);
    int b;
    printf("enter power = ");
    scanf("%d",&b);
    int root = pow(a,b);
    printf("the square is = %d",root);
    return 0;
}