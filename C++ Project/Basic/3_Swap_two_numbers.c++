#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp;
    cout<<"Swap two numbers : \n\n";
    cout<<"--------------------------\n";
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    cout<<"Before Swaping \n";
    cout<< "First Number : "<<n1<<endl;
    cout<< "Second Number : "<<n2<<endl;

    temp=n1;
    n1=n2;
    n2=temp;
    
    cout<<"After Swaping \n";
    cout<< "First Number : "<<n1<<endl;
    cout<< "Second Number : "<<n2;
}