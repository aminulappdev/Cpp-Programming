#include<iostream>
using namespace std;
int main()
{
    int cnt = 0;
    int arr[5] = {5,5,9,5,5};
    for(int i=0; i<5; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
}
