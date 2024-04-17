#include<iostream>
using namespace std;
int main(){
    string s = "abcd";
    for (int i = 0; i <= s.length(); i++)
    {
       for (int j = 0; j < i; j++)
       {
           cout<<s[j];
       }
       
       
    }
}