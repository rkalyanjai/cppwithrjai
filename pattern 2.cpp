#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"1"<<endl;
        for(int row=1;row<n;row++)
        {
            cout<<row;
           for(int i=2;i<=row;i++)
          {
            cout<<"0";
          }
          cout<<row;

        cout<<endl;
        }
        return 0;
}
