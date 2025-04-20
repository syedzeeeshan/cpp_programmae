#include<iostream>
using namespace std;
class second;
class first
{
private :
    int no;
public:
    first (int n);
    friend int add(first, second);
};
class second
{
private:
    int n1;
public:
    second(int n);
    friend int add(first,second);
};
first::first(int n)
{
    no = n;
}
second::second(int n)
{
    n1 = n;
}
int add(first f,second s){
cout<<"First class="<<f.no<<endl;
cout<<"Second class="<<s.n1<<endl;
return f.no+s.n1;
}
int main()
{
    first f(10);
    second s(20);
    cout<<"addition :"<<add(f,s);
}

