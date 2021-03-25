%{
int word_count=0;
int line_count=0;
int semicolon_count=0;
int fullstop_count=0;

%}

%%
int          {printf("%s is a keyword \n", yytext);}
[a-zA-Z0-9]+    {printf("%s is a identifier/word \n", yytext);word_count++;}
[0-9]        {;} 
[;]          {printf("%s is a semicolon \n", yytext);semicolon_count++;}
[.]          {printf("%s is a fullstop \n", yytext);fullstop_count++;}
[+,=]        {printf("%s is a operator \n", yytext);}

[\n]         {line_count++;}
.

%%

int yywrap(){}
int main(){
    FILE *fp;
    char filename[50];
    printf("Enter the filename: \n");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    yyin = fp;
    yylex();
    printf("\nNumber of identifier/word:  %d\n", word_count);
    printf("\nNumber of lines:  %d\n", line_count);
    printf("\nNumber of semicolon:  %d\n", semicolon_count);
    printf("\nNumber of fullstop:  %d\n", fullstop_count);

    return 0;
}