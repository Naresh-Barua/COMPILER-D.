

%%
[A-Za-z0-9]	{printf("alpha numeric\n");}
"*"|"("|")"	{printf("start or parenthesis charac\n");}
"bang"	{printf("found bang\n");}

.	printf("others");



%%

int yywrap()
{
	return 1;
}

int main()
{
printf("character recognition\n");
	yylex();
	

	return 0;
}