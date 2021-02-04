#include <stdio.h>
#include <string.h>
#define MAXINPUT 100
int main()
{
    char input[MAXINPUT] = "";
    int length,i;

    puts("Enter input: ");
    gets(input);
    length = strlen (input);
    for (i=0;i<length; i++)
        if (!isdigit(input[i]))
        {
            printf ("Entered input is not a number\n");
            exit(1);
        }
    printf ("Given input is a number\n");
}
