#include<iostream>
using namespace std;
int main(){
    int i,rem,num,temp,sum=0;
    cout<<"Enter your value : ";
    cin>>num;
    temp = num;
    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;
    }

    cout<<"reverse are : "<<sum<<endl;

    if (num == sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not Armstrong number";
    }
}