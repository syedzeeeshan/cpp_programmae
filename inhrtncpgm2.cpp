#include<iostream>
using namespace std;
 class base1
 {
 protected:
    int var1;
 public:
    void disp_var()
    {
        cout<<"the entered variable one is :"<<var1<<endl;
    }
 };
 class base2
 {
 protected:
    int var2;
 public:
    disp_var2(){
    cout<<"the entered var2 is:"<<var2<<endl;
    }
 };
 class child:public base1,public base2
 {
 protected:
    int var3;
 public:
    child(int a, int b, int c)
    {
        var1 = a;
        var2 = b;
        var3 = c;
    }
    disp_var3(){
    cout<<"entered var3 is:"<<var3<<endl;}
 };
 int main(){


child c(10,20,30);
c.disp_var();
c.disp_var2();
c.disp_var3();

}
