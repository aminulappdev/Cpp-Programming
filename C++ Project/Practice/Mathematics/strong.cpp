#include<iostream>
using namespace std;
int main(){
    int i,rem,num,temp;
    int sum=0;
    cout<<"Enter your value : ";
    cin>>num;
    temp = num;
    while (temp!=0)
    {
        rem = temp % 10;
        int fact=1;
           for (i = 1; i <= rem; i++)
           {
               fact = fact * i;
           }
        cout<<fact<<endl;   
        sum = sum + fact;
        temp = temp / 10;
    }
    if (num == sum)
    {
        cout<<"Strong number";
    }
    else
    {
        cout<<"Not Strong number";
    }
}