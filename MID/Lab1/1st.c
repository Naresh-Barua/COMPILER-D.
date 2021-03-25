#include <stdio.h>

int fact(int);

void main()
{
 int n,factor;

  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&n);
  	factor=fact(n);
    printf("Factorial of the number :%d = %d\n",n,factor);

}

int fact(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
