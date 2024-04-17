#include<iostream>
using namespace std;
int main(){
    int num,i,count = 0;
    cin>>num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
           ++count;
            break;
        }
    }
    //cout<<count<<endl;
    if (count > 0)
    {
        cout<<"Prime number";
    }
    else
    {
       cout<<"Not Prime number";
    }
    
}