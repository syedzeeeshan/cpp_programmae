#include<iostream>
using namespace std;

void display(char,int);
void display(int,int);

int main()
{
 display('*',10);
 display(10,5);
}
void display(char c, int n)
{
    for(;n>0;n--)
        cout<<c<<" ";
        cout<<endl;
}
void display(int a, int b)
{
    for(;b>0;b--)
        cout<<a<<" ";
        cout<<endl;
}
