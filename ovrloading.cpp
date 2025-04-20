#include<iostream>
using namespace std;

class rectangle
{
private:
    int length,width,area;
public:
    void getData()
    {
        cout<<"enter the value of length:"<<endl;
        cin>>length;
        cout<<"enter the value of width:"<<endl;
        cin>>width;
        area = length * width;

    }
    void getData(int a)
    {
        length =  a;
        cout<<"enter the value of width :";
        cin>>width;
        area = width * length;
    }
    void showData()
    {
        cout<<"length is:"<<length<<endl;
        cout<<"width is :"<<width<<endl;
        cout<<"area is :"<<area<<endl;
    }

};
int main()
{
    rectangle r1,r2;
    r1.getData();
    r1.showData();
    r2.getData(2);
    r2.showData();
}
