#include<iostream>
using namespace std;
int main()
{
    int array1[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    int array2[2][5]={{10,9,8,7,6},{5,4,3,2,1}};
    int sum =0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<array1[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<array2[i][j]<<" ";
        }
    }
    cout<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<5; j++)
        {
            sum = sum + (array2[i][j] + array2[i][j]);
        }
    }
  cout<<sum;
}
