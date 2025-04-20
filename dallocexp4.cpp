#include<iostream>
using namespace std;
class rectangle
{
private:
    float length, breadth;
public:


    void getdata()
    {
        cout<<"enter the length and breadth value:"<<endl;
        cin>>length>>breadth;
    }
    void showData()
    {
        cout<<"the length of the rectangle is: ";
        cout<<this->length<<endl;
        cout<<"the breadth of the rectangle is: ";
        cout<<this->breadth<<endl;
    }
    void showArea()
    {
        float area = length*breadth;
        cout<<"the area of the rectangle is: "<<area<<endl;
    }
    void perimeter_rectangle()
    {
        float perimeter = 2*(length+breadth);
        cout<<"the perimeter of the rectangle: "<<perimeter;
    }
};
int main()
{
    rectangle r;
    r.getdata();
    r.showData();
    r.showArea();
    r.perimeter_rectangle();
}
