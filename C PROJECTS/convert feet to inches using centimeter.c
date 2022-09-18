#include <stdio.h>

const double cm_to_feet = 30.48; /*1 centimeter = 30.48 feet*/
const double cm_to_inch = 2.54; /*1 centimeter = 2.54 inches*/

int main(void)
{
	double cm = 1, inches, feet;/*let cm be centimeters, initialized to 1 to satisfy while loop condition*/

	while(cm > 0)
	{

		printf("Enter a height in centimeters (Enter negetive numbers to quit): ");
		scanf("%lf", &cm);
        
        if(cm > 0){
           feet = cm / cm_to_feet;
		   inches = cm / cm_to_inch;

           printf("%.2lf cm = %.2lf feet, %.2lf inches\n", cm, feet, inches);
        }
    }
	printf("Done!\n");

	return 0;
}