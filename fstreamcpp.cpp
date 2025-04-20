#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    char fname[40];
    char ch ;
    cout<<"enter the name of the file: ";
    cin>>fname;
    infile.open(fname);
    if(infile.fail())
    {
        cout<<"the file does not exist";
        exit(1);
    }
    while(!infile.eof())
    {
        ch = infile.get();
        cout<<ch;
    }
}
