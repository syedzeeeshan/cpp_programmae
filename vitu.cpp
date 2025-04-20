#include<iostream>
using namespace std;
class base
{

public:
virtual void getdata()=0;
virtual void display()=0;
};
class derivedB:public base
{
private:
    long int rollno;
    char name[20];
public:
    void getdata();
    void display();
};
void derivedB::getdata()
{
    cout<<"enter the name : ";
    cin>>name;
    cout<<"enter the rollno: ";
    cin>>rollno;
}
void derivedB::display()
{
    cout<<"the name is: "<<name<<endl;
    cout<<"the rollno is: "<<rollno<<endl;
}

int main()
{
    base*ptr;
    derivedB obj;
    ptr=&obj;
    ptr->getdata();
    ptr->display();


}
