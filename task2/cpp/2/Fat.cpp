#include <iostream>
using namespace std;

int main()
{
   double z,m,h;
   cin>>m>>h;
   z=(m/(h*h));
   if(z<18.5)cout<<"underweight";
   else if (z>=18.5 && z<24)cout<<"normal";
   else cout<<z<<endl<<"overweight";
   return 0;
}