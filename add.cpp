#include<iostream>
#include<conio.h>
using namespace std;

int add();
int main()
{
    add();
    return(add());
}

int add()
{
    int a,b,c;
    cout<<"\n enter the number to be added :";
    cin>>a>>b;
    c = a+b;
    cout<<"\n the value for the numbers added is :"<<c;
    return(c);
}
