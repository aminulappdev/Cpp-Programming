#include<iostream>
using namespace std;
int main()
{
   int row,i,col,num;
   cout<<"Input Your Number : ";
   cin>>num;
   for(row=0 ; row <= num ; row++)
   {
       for ( col = 0; col <= num; col++)
       {
           cout<<" * ";
       }
       cout<<"\n";
   }

}