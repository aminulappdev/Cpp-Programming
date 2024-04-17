#include<iostream>
using namespace std;
int main(){
    int num,temp,count=0;
    cout<<"Enter your value : ";
    cin>>num;
    temp = num;
    while (temp!=0)
    {
        temp = temp / 10;
       ++count;
    }
    cout<<"Number of digit is : "<<count;
}