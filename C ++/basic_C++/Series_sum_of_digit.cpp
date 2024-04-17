#include<iostream>
using namespace std;
int main()
{
    int num,i;
    int sum=0;
    cout<<"Input Your numbers : ";
    cin>>num;
    for ( i = 0; i <= num; i++)
    {
       sum = sum + i;
    }
    cout<<"Your Result is :"<<sum;
}