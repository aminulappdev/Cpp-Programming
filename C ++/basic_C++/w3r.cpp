#include<iostream>
using namespace std;


int main()
{
    int cnt = 0;
    int arr[5] = {5,5,9,5,5};
    for(int i=0; i<5; i++)
    {
        if((arr[i] == 5) and (arr[i+1] == 5) or (arr[i] == 5) and (arr[i+1] == 6))
        {
            cnt++;
        }
    }
    cout<<cnt;
}
