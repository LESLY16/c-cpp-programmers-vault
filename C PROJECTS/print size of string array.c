/*No matter what ever you enter for string r the program prints size of String r. 
Note: if you provide "char r[8];" then program prints 8*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int c, i = 8;
    char r[i];
    c=sizeof(r);
    printf("Size of Character Array is: %d\n",c);
    return 0;
}
