#include<stdio.h>
int main()
{
    printf("Print the number between 1 to 100 which is divisible by 3 & 5 :\n");

    for(int i=0; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("%d ",i);
        }
    }
 return 0;
}