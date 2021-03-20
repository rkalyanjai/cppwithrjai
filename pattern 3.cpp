#include<iostream>
using namespace std;
int main()
{
    int n,row;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(row=1;row<=(n/2)-1;row++)
    {


    for(int i=1;i<=(n/2)-row+1;i++)
        cout<<"*"<<" ";
    for(int i=(n/2)-row+2;i<=(n/2)+row;i++)
            cout<<" "<<" ";
     for(int i=(n/2)+row+1;i<=n;i++)
            cout<<"*"<<" ";


      cout<<endl;



    }
     for(row=1;row<=n/2;row++)
    {


    for(int i=1;i<=row;i++)
        cout<<"*"<<" ";
    for(int i=row+1;i<=n-row;i++)
            cout<<" "<<" ";
     for(int i=n-row+1;i<=n;i++)
            cout<<"*"<<" ";


      cout<<endl;



    }
    for(int i=1;i<=n;i++)
        cout<<"*"<<" ";
    return 0;
}
