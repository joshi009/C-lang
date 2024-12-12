#include<stdio.h>
int main(){
    int day;
    printf("Enter the number between 1 to 7 :");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("Enter the number not valid for the days");
        break;
    }


}