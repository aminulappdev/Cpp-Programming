#include<iostream>
using namespace std;
int main()
{
            int sum = 0;
            int n = 24;
            int temp = n;
            for(int i=1; i<n; i++)
         {
             if(n%i==0)
               {
                  sum += i;
                  cout<<sum<<" ";
               }
         }
                  if(temp == sum)
                     {
                          cout<<"perfect"<<" ";
                     }
                   else{
                    cout<<" not perfect"<<" ";
                   }
}
