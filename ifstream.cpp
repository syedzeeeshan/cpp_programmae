#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    char fname [40];
    cout<<"enter the name of the file: "<<endl;
    cin>>fname;
    outfile.open(fname);
    outfile<<"iam equalling the value to the var :"<<endl;
    outfile<<"i hope it is error in the program :"<<endl;
    outfile<<"this progam is the best example :"<<endl;
    cout<<"the stored value  ";
    outfile.close();
}
