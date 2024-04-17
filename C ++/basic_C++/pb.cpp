#include<iostream>
using namespace std;
int main()
{
    int i,sum;
    sum=0;
    i=1;
    while(i<=10)
    {
        sum = sum + i;
        i = i+2;
    }

    cout<<sum;
}
