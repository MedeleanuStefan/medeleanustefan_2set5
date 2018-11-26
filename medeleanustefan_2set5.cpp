#include <iostream>
using namespace std;
int n;
int main()
{
    int biti=0;
    cout<<"nr= "; cin>>n;
    if(n==0){cout<<"1"; return 0;}
    while(n>0)
    {
        n=n>>1;
        biti++;
    }
    if(n==-1){cout<<1; return 0;}
    while(n<-1)
    {
        n=n>>1;
        biti++;
    }

    cout<<biti;
}
