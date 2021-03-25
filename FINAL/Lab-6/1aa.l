%%
[A-Za-z0-9]	{printf("alpha numeric\n");}
"hello world"	{printf("GOODBYE\n");}
. {printf("Wrong Input\n");}
%%
int yywrap()
{
	return 1;
}

int main()
{
	yylex();	

	return 0;
}