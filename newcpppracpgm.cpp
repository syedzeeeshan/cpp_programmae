#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream fout;
   fout.open("country");
   fout<<"united states of america";
   fout<<"united kingdom";
   fout<<"south korea";
   fout.close();

   fout.open("capital");
   fout<<"washington DC";
   fout<<"london";
   fout<<"seoul";
   const int N = 80;
   char line [N];
   ifstream fin;
   fin.open("country");
   cout<<"contents of country  file";
   while(fin)
   {
       fin.getline(line,N);
       cout<<line;
    }
        fin.close();
   fin.open("country");
   cout<<"contents of country file";
   while(fin)
   {
       fin.getline(line,N);
       cout<<line;
   }
        fin.close();
    fin.open("capital");
    cout<<"contents of the capital file";
while(fin)
{
    fin.getline(line,N);
    cout<<line;

}
    fin.close();
}

