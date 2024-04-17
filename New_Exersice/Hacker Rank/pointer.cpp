#include<iostream>
using namespace std;

int main(){
    int a,b,*c,*d,sum,bi;
    cin>>a;
    cin>>b;
    c = &a;
    d = &b;
    sum = *c + *d;
    bi = abs(*c - *d);
    cout<<sum<<endl;
    cout<<bi;
}