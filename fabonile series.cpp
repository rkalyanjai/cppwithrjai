#include<iostream>
using namespace std;
int main()
{
  int N,i,n1=0,n2=1,c;
  cout<<"Enter the number: ";
  cin>>N;
   cout<<n1<<" "<<n2<<" ";
  for(i=0;i<=N-2;++i)
  {
       c=n1+n2;
       cout<<c<<" ";
       n1=n2;
       n2=c;

  }
  return 0;
}
