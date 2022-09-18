#include<stdio.h>
#include<math.h>
int main()
{
    float r1,r2,a,b,c,root,discriminant;/*a,b,c are coefficients of quadratic equation, r1 and r2 are its roots*/
    printf("\n**Finding roots of Quadratic Equation\n**");
    printf("Enter the quadratic equation's a,b,c co-efficients\n");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=b*b-4*a*c; /*dis is Discriminant*/
    r1=-(b+sqrt(fabs(discriminant)))/2*a;
    r2=-(b-sqrt(fabs(discriminant)))/2*a;
    if(a==0 && b==0) {
        printf("Provided Invalid Inputs\n");
    } else if(a==0) {
        printf("Provided is Linear Equation\n");
        root=-c/b;
        printf("Root=%.2f\n",root);
    } else if(discriminant>0) {
        printf("Roots are real and distinct(unequal)\n");
        printf("They are %.2f,%.2f\n",r1,r2);
    } else if(discriminant<0) {
        printf("Roots are imaginary\n");
        printf("They are %.2f+i%.2f,%.2f-i%.2f\n",r1,r2,r1,r2);
    }
    else {
        printf("Roots are real and equal\n");
        printf("They are %.2f,%.2f\n",r1,r2);
    }
    return 0;
}
