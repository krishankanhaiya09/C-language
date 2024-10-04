//develope  a program to find out
//largest number from given three numbers using Logical Operato(&&) 
#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("enter the first number :");
    scanf("%d",&x);
    printf("enter the second number :");
    scanf("%d",&y);
    printf("enter the third number :");
    scanf("%d",&z);
    if(x>y && y<z){
        printf("%d is the largest number",x);
    }
    else if(y>x && x<z){
        printf("%d is the largest number",y);
    }
    else{
        printf("%d is the largest number",z);
    }
    return 0;
}