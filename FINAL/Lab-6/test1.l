%{
int w=0, l=1;
%}

%%
[0-9][^ \t\n]+	{ }
\+|\-|\=|\*|\/|\*\*	{}
[^ \t\n]+	{w++;}
\n	{l++;}
%%

int yywrap()
{
	return 1;
}

int main()
{
printf("character recognition\n");
FILE *file;
	file = fopen("code.txt", "r") ;
	if (!file) {
		printf("couldnot open file");
		exit (1);	
	}
	else {
		yyin = file;
	}
	yylex();
printf("words: %d and lines: %d", w, l);
	

	return 0;
}