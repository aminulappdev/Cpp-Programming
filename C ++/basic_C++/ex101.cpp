#include<iostream>
#include<array>
using namespace std;
int main()
{  //Given array
   int cnt=0;
   int  arr[] = { 5, 5, 1, 15, 5 };
   for(int i=0; i<=5; i++)
   {
       if(arr[i] == 15 and arr[i+1] == 15)
       {
           cnt++;

       }
   }
  if(cnt>=1)
  {
      cout<<1;
  }
  else
  {
      cout<<0;
  }
   return 0;
}

