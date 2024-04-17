#include<iostream>
#include<array>
using namespace std;
int main()
{  //Given array
   int  arr[] = {10 ,20 ,30, 50, 11};

   int al = sizeof(arr)/sizeof(arr[0]);
   al = al/2;
   for(int i=0; i<3; i++)
   {
       cout<<arr[al];
       al++;
   }

   return 0;
}
