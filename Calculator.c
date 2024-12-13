#include<stdio.h>
int main(){
    char ch ;
    int a;
    int b;
    printf("Enter the two  number");
    scanf("%d,%d",&a,&b);
    switch(ch){
        case '-':
        printf(a-b);
        break;
        case '+':
        printf(a+b);
        break;
        case '*':
        printf(a*b);
        break;
        case '/':
        printf(a/b);
        break;
        case '%':
        printf(a%b);
        break;
    }
}