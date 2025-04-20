#include<iostream>
using namespace std;
class book
{
private:
    int bookno;
    char bookname[50],author[40];
public:
    void showbook();
    void getinfo();
    ~book()
    {
        cout<<"destructor called"<<endl;
    }
};
 void book::getinfo()
 {
     cout<<"enter the book details: "<<endl;
     cin>>bookno>> bookname>> author;
 }
 void book::showbook()
 {
     cout<<bookno<<bookname<<author<<endl;
 }

 int main()
 {
     book b1,*b2;
     b2 = new book;
     b1.getinfo();
     b2->getinfo();
     b1.showbook();
     b2->showbook();
     delete b2;
 }
