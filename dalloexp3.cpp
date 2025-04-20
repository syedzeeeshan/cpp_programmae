#include<iostream>
#include<string.h>
using namespace std;
 int length;
 class String
 {
 private:
    char *str;
 public:
    String(char *s)
    {
        length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }
    ~String()
    {
        delete str;
    }
    void display()
    {
        cout<<str;
        cout<<"\n Destructor called"<<endl;
    }
 };
 int main()
 {
     String s1="Lafore";
     s1.display();
    cout<<length;
 }
