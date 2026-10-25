#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int luogu=11+n*3;
    int bendi=n*5;
    if(luogu>bendi){
        cout<<"local";
    }else{
        cout<<"luogu";
    }
    return 0;
}