#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout<<"Enter your Multiplication number : ";
    cin>>number;
    for ( i = 1; i <= 10; i++)
    {
        cout<<number<<" x "<<i<<" = "<<(number*i)<<endl;
    }
}