
%%
[0-9]+	{printf("integer\n");}
.	{printf("any character\n");}
%%

int yywrap()
{
	return 1;
}

int main()
{
printf("positive and negative integer recognition\n");
	yylex();
	

	return 0;
}