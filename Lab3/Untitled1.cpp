#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int isKeyword(char buffer[]){
 char keywords[32][10] = {"auto","break","case","char","const","continue","default",
 "do","double","else","enum","extern","float","for","goto",
 "if","int","long","register","return","short","signed",
 "sizeof","static","struct","switch","typedef","union",
 "unsigned","void","volatile","while"};
 int i, flag = 0;

 for(i = 0; i < 32; ++i){
 if(strcmp(keywords[i], buffer) == 0){
 flag = 1;
 break;
 }
 }

 return flag;
}

int identifier(char str[]){
    int flag,i=1;
    if(isalpha(str[0]) || str[0]=='_')
        flag=1;
    else
        flag=0;
    while(str[i]!='\0')
    {
        if(!isdigit(str[i]) && !isalpha(str[i]) && str[i]!='_')
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
        return 1;
    else if(flag==0)
        return 0;
}

int main(){
 char ch, buffer[15], operators[] = "+-*/%=";
 ifstream fin("program.txt");
 int i,j=0;

 if(!fin.is_open()){
 cout<<"error while opening the file\n";
 exit(0);
 }

 while(!fin.eof()){
   ch = fin.get();

 for(i = 0; i < 6; ++i){
   if(ch == operators[i])
   cout<<ch<<" is operator\n";
   }

   if(isalnum(ch) || ch=='_'){
   buffer[j++] = ch;
   }
   else if((ch == ' ' || ch == '\n') && (j != 0)){
   buffer[j] = '\0';
   j = 0;

   if(isKeyword(buffer) == 1)
   cout<<buffer<<" is keyword\n";
   else if(identifier(buffer) == 1)
   cout<<buffer<<" is a valid indentifier\n";
   else if(identifier(buffer) == 0)
   cout<<buffer<<" is not a valid indentifier\n";
   }

 }

 fin.close();

 return 0;
}
