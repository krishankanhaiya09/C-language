#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n<=0){
        printf("it is a negative number");
    }
    else {
        printf("its a positive number");
    }
    return 0;
}