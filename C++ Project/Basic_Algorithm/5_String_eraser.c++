#include<iostream>
using namespace std;
string test(string sample, int n);
int main()
{
   cout<< test("if else", 5) << endl;
   cout<< test("else", 3) << endl;
}
 

 string test(string sample, int n)
 {
   return sample.erase(n,1);
 }