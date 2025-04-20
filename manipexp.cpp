
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=1,b=2;
    cout<<setfill('*');
    cout<<setw(10)<<a<<setw(4)<<b<<endl;
    cout<<setfill('$');
    cout<<setw(4)<<a<<setw(4)<<b<<endl;
}*/

/*#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=2,b=3;
    cout<<setw(5)<<a<<setw(4)<<b;

}*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=2,b=3;
    float c=(float)a/b;
    cout<<setprecision(1)<<c<<endl;
    cout<<setprecision(2)<<c<<endl;
    cout<<setprecision(3)<<c<<endl;
}
