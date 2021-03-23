#include <iostream>  
using namespace std;  
int main()  
{  
int N,m,T;    
   cin>>T;
for(int i=1;i<=T;i++)
{ cin>>N;
   int sum=0;
while(N>0)    
{    
m=N%10;    
sum=sum+m;    
N=N/10;    
}

cout<<sum<<endl;
}
return 0;  
}  
