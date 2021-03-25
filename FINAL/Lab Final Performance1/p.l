%{
int semi_count=0;
int fullstop_count=0;
int iw_count=0;
int l_count=0;
%}

%%
int {printf("%s is a keyword \n", yytext);}
[;] {printf("%s is a semicolon \n", yytext);semi_count++;}
[.] {printf("%s is a fullstop \n", yytext);fullstop_count++;}
[+,=] {printf("%s is a operator \n", yytext);}
[a-zA-Z]+ {printf("%s is a identifier/word \n", yytext);iw_count++;}
[\n] {l_count++;}
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
    printf("\nNumber of semicolon: - %d\n", semi_count);
    printf("\nNumber of fullstop: - %d\n", fullstop_count);
    printf("\nNumber of identifier/word: - %d\n", iw_count);
    printf("\nNumber of lines: - %d\n", l_count);
    return 0;
}