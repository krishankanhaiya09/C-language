#include<stdio.h>
int main(){
    int x;
    printf("enter a year :");
    scanf("%d",&x);
    if(x%4){
        printf("its a leap year");
    }
    if(x%!4){
    printf("its not a leap year");
}
return 0;
}