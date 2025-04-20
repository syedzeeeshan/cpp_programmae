#include<iostream>
using namespace std;
const int MAX = 100;


class Distance
{
private:
    int feet;
    int inches;
public:
    getVal()
    {
     cout<<"enter the feet value :"<<endl;
     cin>>feet;
     cout<<"enter the inches value :"<<endl;
     cin>>inches;
    }
    void show()
    {
        cout<<feet<<"\t"<<inches<<endl;
    }
};
int main()
{
    Distance dist[MAX];
    int n = 0;
    char ans;



    do
    {
    cout<<"\n Enter Distance  "<<n+1;
    dist[n++].getVal();
    cout<<"\n Another Data [y/n]?";
    cin>>ans;
    }while(ans != 'n');

    for(int i= 0;i<n;i++)
    {
        cout<<"distance value"<<i+1<<"is";
        dist[i].show();
    }
}
