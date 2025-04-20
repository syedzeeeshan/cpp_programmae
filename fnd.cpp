#include<iostream>
using namespace std;

class book
{
private :
	int bno;
    char bname[20];
public:
    int getdata();
    friend int show(book);
};
int book::getdata()
{
cin>>bno>>bname;
}
int show(book bk)
{
cout<<bk.bno<<bk.bname;
}
int main()
{
book b;

b.getdata();
show(b);

}



