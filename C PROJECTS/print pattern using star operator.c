/*Print a pattern using "*" operator, if number of rows provided.
If pattern printed is;
*
**
***
****
then number of rows provided is 4.
*/
#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
