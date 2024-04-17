#include<iostream>
#include<string>
using namespace std;


int copy(int a, int b){

   if(((a <=50 and a >=40) and (b <= 50 and b >=40)) or ((a <=60 and a >=50) and (b <= 60 and b >=50)))
   {
       return true;
   }
   else
    {
       return false;
    }

}

int main(){
   cout<<copy(78,95)<<endl;
   cout<<copy(25,35)<<endl;
   cout<<copy(40,50)<<endl;
   cout<<copy(55,60)<<endl;

}
