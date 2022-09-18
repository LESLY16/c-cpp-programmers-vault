#include<stdio.h>
#include<math.h>
#define PI 3.1428 /*Taking value of PI as constant*/
int main(){
    float rc,h,ac;/*rc->radius of circle, h->height, ac->area of circle*/
    float rcy,v;
    printf("\n***Finding Area of circle\n**");
    printf("Enter radius of circle\n");
    scanf("%f",&rc);
    ac=PI*rc*rc;
    printf("Area of circle is:%.2f\n",ac);

    printf("\n***Finding Volume of cylinder\n**");
    printf("Enter radius of cylinder\n");
    scanf("%2f",&rcy);
    printf("Enter height of cylinder\n");
    scanf("%2f",&h);
    v=2*PI*rcy*(rcy+h);
    printf("Volume of cylinder is:%.2f\n",v);
    return 0;
}