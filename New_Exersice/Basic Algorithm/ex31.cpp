#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,2,4};
    int i,j;
    for (i = 0; i < 6; i++)
    {
       for (j = 1; j < i; j++)
       {
        cout<<arr[i]<<endl;
        cout<<arr[j]<<endl;
       }
       
    }
    
}