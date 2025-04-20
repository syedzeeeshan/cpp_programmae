#include<iostream>
using namespace std;
int main()
{
    int *ptr,i;
    ptr = new int[5];
    for(i=0;i<5;i++)
    {
        cout<<"enter the 5 numbers: ";
        cin>>*(ptr+i);
    }
    for(i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<endl;

    }
    delete []ptr;
}
