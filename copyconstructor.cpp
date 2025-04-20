#include<iostream>
#include<string.h>
using namespace std;

class item
{
private:

       int itno;
       float price;
       char itname[20];

public:
    item(int a,char *b,float c)
    {
        itno = a;
        strcpy(itname,b);
        price = c;
    }
    item(item&ptr)
    {
        itno = ptr.itno;
        strcpy(itname,ptr.itname);
        price =ptr.price;
    }
    showdata()
    {
        cout<<itno<<endl<<itname<<endl<<price<<endl;
    }

};
int main()
{
    item i1(1,"monitor",3800.0),i2(i1);
    cout<<"first item "<<endl;
    i1.showdata();
    cout<<"second item"<<endl;
    i2.showdata();
}
