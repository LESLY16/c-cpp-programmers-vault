//C Program to Swap Numbers in Cyclic Order Using Call by Reference
#include<stdio.h>
void swapNumbers(int *a, int *b, int *c);
int main(){
    int a, b, c;
    printf("Please enter 3 positive integer numbers to store in a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("The numbers before swapping are: a=%d, b=%d, c=%d\n",a, b, c);
    swapNumbers(&a,&b,&c);
    printf("The numbers after swapping are: a=%d, b=%d, c=%d\n",a, b, c);
    return 0;
}

void swapNumbers(int *s1, int *s2, int *s3){
    int temp;
    //swapping in cyclic order
    temp = *s2;
    *s2=*s1;
    *s1=*s3;
    *s3=temp;
}   