#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;


int main()
{
    ifstream infile;
    ofstream outfile;
    char source[40],target[50],ch;
    cout<<"enter the source file  name : "<<endl;
    cin>>source;
    cout<<"enter the target file name: "<<endl;
    cin>>target;
    infile.open(source);
    if(infile.fail())
    {
        cout<<"error the source file was not found!!";
        exit(1);
    }
    outfile.open(target);
    if(outfile.fail())
    {
        cout<<"enter the target file is not found!!";
        exit(1);
    }
    while(!infile.eof())
    {
        ch = (infile.get());
        outfile.put(ch);
        cout<<ch;
    }
    infile.close();
    outfile.close();

}
