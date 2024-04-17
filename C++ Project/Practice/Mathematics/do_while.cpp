#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int j = 0;
    int i = 0;
    int arr[10];
    do
    {
        cin>>arr[j];
        j++;
    } while (j<10);
    
    do
    {
        cout<<arr[i]<<" ";
        sum = sum + arr[i];
        i++;
    } while (i<10);
    cout<<endl<<"Sum are : "<<sum;
}