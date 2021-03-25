%{
int c_count =0;
int s_count = 0;
int sp= 0;
%}

%%
[A-Z] {printf("%s capital letter\n" , yytext);c_count++;}
[a-z] {printf("%s small   letter\n" , yytext);c_count++;}
[ ]   {printf("%s space \n" , yytext);sp++;}
.     {printf("%s any character\n" ,yytext);}
\n    {return 0;}
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
           printf("\nNumber of Captial letters in the given input - %d\n", c_count);
           printf("\nNumber of small letters in the given input - %d\n", s_count);   
           printf("\nNumber of spacce in the given input - %d\n", sp);
return 0;
}