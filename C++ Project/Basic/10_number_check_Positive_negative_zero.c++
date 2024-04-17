#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your number : ";
    cin>>number;
    if (number > 0)
    {
       cout<<"Positive Number";
    }
   else if (number < 0)
    {
        cout<<"Negative Number";
    }
   else if (number == 0)
    {
        cout<<"Zero";
    }
    else
    {
        cout<<"Unknown number";
    }
}
