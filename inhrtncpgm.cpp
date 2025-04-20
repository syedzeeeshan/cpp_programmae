#include<iostream>
using namespace std;
 class pcp
 {
 private:
    float dos,MsOffice,foxpro;
 public:
    pcp_getfees();
    pcp_feeslist();
 };
class hdca:public pcp
{
private:
    float unix,c,cpp;
public:
    hdca_getfees();
    hdca_listfees();
};
int pcp::pcp_getfees()
{
    cout<<"get fees details:"<<endl;
    cin>>dos>>MsOffice>>foxpro;
}
int pcp::pcp_feeslist()
{
    cout<<"fees amount for dos :"<<dos<<endl;
    cout<<"fees amount for MsOffice :"<<MsOffice<<endl;
    cout<<"fees amount for foxpro :"<<foxpro<<endl;
}
int hdca::hdca_getfees()
{
    cout<<"enter the detail of the course :"<<endl;
    cin>>unix>>c>>cpp;
}
int hdca::hdca_listfees()
{
    cout<<"the fees for unix :"<<unix<<endl;
    cout<<"the fees for c :"<<c<<endl;
    cout<<"the fees for cpp :"<<cpp<<endl;
}
int main ()
{
    hdca h;
    pcp p;
    cout<<"fees details for PCP :"<<endl;
    p.pcp_getfees();
    cout<<"fees details for HDCA :"<<endl;
    h.hdca_getfees();
    cout<<"fees details for PCP :"<<endl;
    p.pcp_feeslist();
    cout<<"enter the fees details for HDCA :"<<endl;
    h.hdca_listfees();
}
