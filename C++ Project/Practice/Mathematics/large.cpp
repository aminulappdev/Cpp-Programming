#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    int sum,mul;
    cin>>n1>>n2>>n3;
    sum = n1 + n2 + n3;
    mul = n1 * n2 * n3;
    if (sum > mul)
    {
        cout<<"The Big is Sum : "<<sum<<endl;
        cout<<"The Small is Multiplication : "<<mul<<endl;
    }
    else if (sum < mul)
    {
        cout<<"The Big is Multiplication : "<<mul<<endl;
        cout<<"The Small is Sum : "<<sum<<endl;
    }
    else if(sum == mul)
    {
        cout<<"Two Number are same";
    }
}