#include<stdio.h>
int main(){
    int sellprice;
    int costprice;
    printf("enter sell price :");
    scanf("%d",&sellprice);
    printf("enter cost price :");
    scanf("%d",&costprice);
    if(sellprice>costprice){
        printf("its a profit");
    }
    if(costprice>sellprice){
        printf("its a loss");
    
    }
    return 0;
}