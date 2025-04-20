#include<iostream>
using namespace std;
const int MAX = 100;
class stackD
{
private:
    int st[MAX];
    int top = 0;
public:
    stackD() {
    top = 0;
    }
    void push(int v){
    v=st[++top];
    }
    int pop(){
    return st[top--];
    }
};
int main()
{
    stackD s;
    s.push(0);
    s.push(15);
    cout<<"the element stored in 1st VAR is:"<<s.pop()<<endl;
    cout<<"the element stored in 2nd VAR is:"<<s.pop()<<endl;
}
