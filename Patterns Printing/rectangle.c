// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter A Length : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
            if(i==n ||  j==n || i==1 || j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}