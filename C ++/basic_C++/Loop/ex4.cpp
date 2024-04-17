
#include<iostream>
using namespace std;
int main()
{

    for(int i =1; i<=500; i++)
    {
        int sum = 0;
        int n = i;
        int temp = n;
        for(int j=1; j<n; j++)
        {
            if(n%j==0)
            {
              sum+= j;
            }
        }
            if(temp == sum)
                {
                    cout<<sum<<endl;
                }
    }

}
