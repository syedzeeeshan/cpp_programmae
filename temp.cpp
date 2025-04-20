#include<iostream>
using namespace std;
template<typename T>
T max(T x,T y)
{
    return(x>y)?x:y;
}

int main()
{
    cout<<max <int>(17,18)<<endl;
    cout<<max <float>(1.4,3.4)<<endl;
    cout<<max <char>('A','B');
}
