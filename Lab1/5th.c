#include <stdio.h>

int main()
{
    char s1[1000],s2[1000];
    int i,j;

    printf("Enter  first name: ");
    gets(s1);
    printf("Enter  last name:  ");
    gets(s2);
    j=strlen(s1);

    for(i=0;s2[i]!='\0';i++)
    {
    	s1[i+j]=s2[i];
	}
	s1[i+j]='\0';

    printf("Full Name ="%s"\n",s1);



    return 0;
}
