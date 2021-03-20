#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,b,a=INT_MIN;   //for using INT_MIN/INT_MAX use header file #include<climits>
    //int d=INT_MAX;   //to find minima use IMT_MAX(means opposite)
    cout<<"No of terms";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;                 //5,4,9,7  -1=min    5>-1    5;  4>5 ; 9>5 ;9 7>9 9
        if(b>a)
        {
            a=b;
        }
     /*   if(b<d)
        {
            d=b;   //for minima
        }
             }*/
    }
    cout<<"Maxima is"<<a<<endl;
    //cout<<"Minima is"<<d<<endl;
    return 0;
}
       }*/
    }
    cout<<"Maxima is"<<a<<endl;
    //cout<<"Minima is"<<d<<endl;
    return 0;
}
