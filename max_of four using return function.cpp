#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    
    if(a>b && a>c && a>d){
       int max=a;
        return max;}
        else if(b>a && b>d && b>c){
        int max=b;
        return max;}
        else if (c>a && c>b && c>d){
            int max=c;
            return max;
        }
        else {
         int max=d;
         return max;}
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
