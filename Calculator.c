#include<stdio.h>
int main(){
    char ch ;
    int a;
    int b;
    printf("Enter the first  number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the operation + , - , * , / ");
    getchar();
    scanf("%c",&ch);
    switch(ch){
        case '-':
        printf("Result: %d\n",a-b);
        break;
        case '+':
        printf("Result: %d\n",a+b);
        break;
        case '*':
        printf("Result: %d\n",a*b);
        break;
        case '/':
        printf("Result: %d\n",a/b);
        break;
        case '%':
        printf("Result: %d\n",a%b);
        break;
    }
    return 0;
}