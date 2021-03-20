#include<iostream>
using namespace std;
int main()
{
    int p,r,t;
    float SI;
    cin>>p>>r>>t;
    //SI= (p*Q*r)/100;   :- int/int = int.
    SI = (p*r*t)/100.00;   // int/float = float , as float has higher precedence.
    cout<<SI;
    return 0;
}
