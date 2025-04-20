#include<iostream>
using namespace std;

class exam
{
private:
    int Sno,mark1,mark2;
public:
    exam()
    {
        Sno =mark1=mark2 = 100;
    }
    void showdata()
    {
        cout<<"Sno"<<Sno<<endl<<"mark2"<<mark2<<endl<<"mark1"<<mark1<<endl;
    }
    exam(int a,int m1,int m2)
    {
        Sno = a;
        mark1 = m1;
        mark2 = m2;
    }
};
 int main()
 {
     exam e,e1(90,100,90);
     e.showdata();
     e1.showdata();

 }
