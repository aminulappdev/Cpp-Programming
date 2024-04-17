#include<iostream>
using namespace std;
string test(string sample);
int main()
{
   cout<< test("if else") << endl;
   cout<< test("else") << endl;
}
 

 string test(string sample)
 {
   if (sample.length() > 2 && sample.substr(0,2) == "if")
   {
      return sample;
   }
   else
   {
       return "if " + sample;
   }
   
 }