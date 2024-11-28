#include<stdio.h>
int main(){
    int n ;
    int a = 0;
    int b = 1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d ", a);
    printf("%d ",b);
    for(int i=2;i<n;i++){
        int c = a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
    return 0;
}