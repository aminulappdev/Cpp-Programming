#include<iostream>
using namespace std;
int test(int b){
   int a = 51;
   return a < b ? (b-a)*3 : (a-b);
}
int main(){
   int a,b,res;
   cout<<test(53)<<endl;
   cout<<test(30)<<endl;
   cout<<test(51)<<endl;
}