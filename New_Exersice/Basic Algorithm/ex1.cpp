#include<iostream>
using namespace std;
int sum(int a,int b){
   return a==b ? (a+b)*3 : (a+b);
}
int main(){
   int a,b,res;
   cout<<sum(1,2)<<endl;
   cout<<sum(3,2)<<endl;
   cout<<sum(2,2)<<endl;
}
