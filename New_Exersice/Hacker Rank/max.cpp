#include<iostream>
using namespace std;
int greaters(int a, int b, int c, int d){
   int m = max(a,max(b,max(c,d)));
   return m==a?a:m==b?b:m==c?c:d;
}
int main(){
    int a,b,c,d,res;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    res = greaters(a,b,c,d);
    cout<<res;
}