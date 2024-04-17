#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum;
    int temp1,temp2,multi;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    temp1 = num1;
    temp2 = num2;
    sum = temp1 + temp2;
   
    if (temp1 == temp2)
    {
        multi = sum*3;
        cout<<"Two digits are same so, Your result is : "<<multi;
    }
    else
    {
        cout<<"Your result is : "<<sum;
    }
    
    
}