#include<iostream>
using namespace std;


class base1
{
protected:
    int var1;
public:
    void disp_base1(){
    cout<<"var1"<<var1<<endl;
    }
};
class deri:public base1,public base2
{
private:
    int var3;
public:
    deri(int a,int b,int c)
    {
        var1 = a;
        var 2=b;
        var 3 =c;
    }
    void disp_me()
    {
        cout<<"var3 is"<<var3;
    }
};
int main()
{
 deri d(10,20,30);
 d.disp_base1();
 d.disp_base2();
 d.disp_me();
}
