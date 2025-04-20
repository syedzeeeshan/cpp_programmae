#include<iostream>
using namespace std;

int main()
{
    int b,h;
    int area(int,int);
    cout<<"enter the breadth and height of the triangle:";
    cin>>b>>h;
    area(b,h);
    cout<<endl<<"end";
}

int area(int x,int y)
{
    float areaT;
    areaT = 0.5*x*y;
    cout<<"area is"<<areaT;
}


