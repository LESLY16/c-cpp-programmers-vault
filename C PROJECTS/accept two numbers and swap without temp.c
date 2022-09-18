/*Swap two numbers without using third variable*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers to store in a & b\n");
    scanf("%d%d",&a,&b);
    printf("The numbers before swapping are a=%d & b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swaping are a=%d & b=%d\n",a,b);
    return 0;
}