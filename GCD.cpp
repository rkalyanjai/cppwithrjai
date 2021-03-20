#include<iostream>
using namespace std;
int gcd(int a, int b)
{   if(b==0)
      return a;                      // if b>a then it first convert it into a>b, then the recursion works
    return gcd(b,a%b);

}
int main()
{   int a,b;
    cin>>a>>b;
    int d=gcd(a,b);
    cout<<d;

    return 0;
}
