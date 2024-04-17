#include<iostream>
using namespace std;
int main(){
    int rem,num,temp,sum=0;
    cout<<"Enter your value : ";
    cin>>num;
    temp = num;
    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum*10 + rem;
        temp = temp / 10;
    }
    cout<<"Reverse of digit is : "<<sum;
}