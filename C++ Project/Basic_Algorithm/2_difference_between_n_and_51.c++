#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,def,multi;
    cout<<"Enter value of N : ";
    cin>>n;
    if (n > 51)
    {
        multi = (n-51)*3;
        cout<<"N is greater than 51 so, your result = "<<multi;
    }
    else
    {
       def = (51-n);
       cout<<"your result = "<<def;
    }
    
}