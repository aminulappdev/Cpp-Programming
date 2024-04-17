 
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{
    float a,b,c,s,area;
    cout<<"Enter Your Values : ";
    cin>>a>>b>>c;
    s = (a+b+c)/2;   // S = Semi  Parameter
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<setprecision(4) <<"Area : "<<area;


} 