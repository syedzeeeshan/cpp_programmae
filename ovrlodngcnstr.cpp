#include<iostream>
using namespace std;

class circle
{
private:
    int r;
    int b,h;
    float area;
public:
    circle()
    {
        cout<<"enter the radius of the circle"<<endl;
        cin>>r;
        area = 3.14 *r*r;
        cout<<"the area of  the given circle is"<<area<<endl;
    }
    circle(int r)
    {
        area = 3.14*r*r;
        cout<<"area of the circle is"<<area<<endl;
    }
    circle(int b,int h)
    {
        cout<<"enter the base of the triangle:"<<endl;
        cin>>b;
        cout<<"enter the height of the triangle:"<<endl;
        cin>>h;
        area = 0.5*b*h;
        cout<<"the area of the triangle is"<<area;
    }
};
int main()
{
    circle();
    circle(2);
    circle(2,2);

}
