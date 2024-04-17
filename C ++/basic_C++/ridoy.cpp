#include<iostream>
using namespace std;
int main()
{
    int arr[]={ 1, 5, 6, 9, 10, 17 };
    int sum=0;
    for(int i=0; i<6; i++)
    {
      if(arr[i]==5 && arr[i+1]==6)
        {
            arr[i]=0;
            arr[i+1]=0;
        }

        cout <<arr[i];
        sum+=arr[i];
    }
    cout << sum;


}

