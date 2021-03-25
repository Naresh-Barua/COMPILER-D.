#include <iostream>

using namespace std;

int main()
{
    cout<<"Input : ";
    string a,b;
    cin>>a,b;
    if(a == "+" || a=="-" || a=="*" || a=="/")
    {
        cout<<"It's an Operator"<<endl;
    }
    else{
        cout<<"it's not an operator";
    }
}
