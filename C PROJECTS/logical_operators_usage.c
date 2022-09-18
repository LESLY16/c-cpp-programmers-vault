/*Logical operators usage in C programming learnings*/
#include<stdio.h>
#include<stdbool.h> /*including stdbool.h is not necessary*/
int main()
{
    int a,b,c,d,e,v;/*initializing variable*/
    printf("Wether milk is available?:<Yes=1,No=0>\n");
    scanf("%d",&v);
    printf("Should I use Honey?:<Yes=1,No=0\n");
    scanf("%d",&a);
    printf("Should I use sugar?:<Yes=1,No=0>\n");
    scanf("%d",&b);
    printf("Tea type-Bag:<Yes=1,No=0>\n");
    scanf("%d",&c);
    printf("Tea type-leaf<Yes=1,No=0>\n");
    scanf("%d",&d);
    printf("What's your mood:<Yes=1,No=0>\n");
    scanf("%d",&e);
    if((v==1)&&((a==1)||(b==1))&&((c==1)||(d==1))&&(e==1)) {
        printf("\nOk Let me do a Tea for you\n");
    } else {
        printf("I am not doing the tea\n");
    }
    return 0; /*returning zero because, we are using return type as int for main function and zero is an integer*/
}
