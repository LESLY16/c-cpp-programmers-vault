/*Accept two integer numbers using scanf, swap them and print to output*/
#include<stdio.h>
int main()
{   
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The numbers before swapping are a=%d & b=%d\n",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("After swapping the numbers are a=%d & b=%d\n",a,b);
    return 0;
}
