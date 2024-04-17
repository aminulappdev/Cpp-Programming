#include<iostream>
using namespace std;
int main(){
    float av,sum = 0;
    float arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
         sum = sum + arr[i];
    }
    cout<<"Sum are : "<<sum;
    av = sum/10;
    cout<<endl<<"Average are : "<<float(av);
}