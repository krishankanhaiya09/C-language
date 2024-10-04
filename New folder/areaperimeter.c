#include<stdio.h>
int main(){
    int l;
    printf("enter the length :");
    scanf("%d",&l);
    int b;
    printf("enter the breadth :");
    scanf("%d",&b);
    int a;
    int p;
    a = l*b ;
    p = 2*(l+b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    
    }
    return 0;
}