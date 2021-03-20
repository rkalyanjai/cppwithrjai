#include<iostream>
using namespace std;
int main()
{
    int a,b,c,p,q;
    cout<<"Enter the 3 numbers";
    cin>>a>>b>>c;
    p=max(a,max(b,c));
    cout<<p<<" is largest"<<endl;
    q=min(a,min(b,c));
    cout<<q<<" is smallest"<<endl;

    return 0;


}
