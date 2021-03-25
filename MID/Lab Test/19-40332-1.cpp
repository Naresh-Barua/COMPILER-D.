#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int Oprt=0;
int Func=0;
static int a=0,b=0,c=0,d=0;
ofstream file("19-40332-1.txt");

void Function_finding(char *input)
{


}

bool operator_finding(string EVEN)
{
    bool check=false;
     char even[4]={'+','-','*','='};

    char input[50];
    strcpy(input, EVEN.c_str());

for(int i=0;i<5;i++)
    {
       if(input[i]=='+' && a<1 )
        {
            a++;
                file<<"Operator 1: addition"<<endl;
             Oprt++;
             check=true;
             break;
        }
       else  if(input[i]=='-'  && b<1 )
        {
            b++;
                file<<"Operator 2: substraction"<<endl;
             Oprt++;
             check=true;
             break;
        }
       else  if(input[i]=='*' && c<1)
        {
            c++;
                file<<"Operator 3: multiplication"<<endl;
             Oprt++;
             check=true;
             break;
        }
        else  if(input[i]=='=' && d<1)
        {
            d++;
                file<<"Operator 4: assignment"<<endl;
             Oprt++;
             check=true;
             break;
        }


    }
        return check;

}

int main()
{
    ifstream file_read("program.cpp");
    string line ;
    char input[100];

     while(getline(file_read,line))
    {
        strcpy(input, line.c_str());
         char *token = strtok(input, " ");



    while (token != NULL)
    {
    string test;
    test=token;


     operator_finding(test);

    int x=0;
         if(x<2){

   int count=0;
    bool check=false;

    if((token[3])=='(')
    {
        if(Func<2)
        {
            Func++;


         file<<"Function : ";

         for(int k=0;k<3;k++)
         {
                file<<token[k];
         }
         file<<endl;
        }


      x++;
    }


         }

        token = strtok(NULL, " ");
    }
}

file_read.close();

    file<<"Total number of operators : "<<Oprt<<endl;

    file<<"Total number of user defined function  : "<<Func<<endl;

    return 0;
}
