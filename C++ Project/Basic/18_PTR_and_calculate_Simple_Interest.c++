#include<iostream>
using namespace std;
int main()
{
    int p,r;
    float i,t;
    cout<<"Input the Principle: ";
    cin>>p;
    cout<<"Input the  Rate of Interest: ";
    cin>>r;
    cout<<"Input the Time: ";
    cin>>t;
    i = (p*t*r)/100;
    cout<<"The Simple interest for the amount "<<p<<" for "<<t<< " years @ "<<r<<" % is:" <<i;
}