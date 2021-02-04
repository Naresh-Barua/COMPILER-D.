#include <stdio.h>
#include <string.h>
#define max 100
void main ()
{
    int a,b;
    char arr[max];
    char x[2];
    puts("Enter the line\n");
    gets(arr);
    strncpy(x,arr,2);
    if ((a=strncmp(x,"//",2))  && (b=strncmp(x,"/*",2)))
        printf("Line is not a Comment\n");
    else
        printf("Line is a Comment\n");

}
