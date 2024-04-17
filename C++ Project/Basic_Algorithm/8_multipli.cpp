#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your value : ";
    cin>>num;
    if (num % 3 == 0 || num % 7 == 0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}