#include<iostream>
using namespace std;
class base
{

public:
    void getdata();
    void display();
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
void base::getdata()
{
    cout<<"basic function to get data"<<endl;
}
void base::display()
{
    cout<<"creating a basic function to display a data"<<endl;
}
void derivedB::getdata()
{
    cout<<"enter the roll no of the student";
    cin>>rollno;
    cout<<"enter the name of the student:";
    cin>>name;
}
void derivedB::display()
{
    cout<<"the entered data is printed above"<<endl<<rollno<<endl<<name<<endl;

}
int main()
{
    base*ptr;
    derivedB obj;
    ptr=&obj;
    ptr->getdata();
    ptr->display();


}
