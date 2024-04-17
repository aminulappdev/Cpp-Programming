#include<iostream>
using namespace std;
int main(){
    string s = "abcdab";
    int cnt = 0;
    for (int i = 0; i < s.length()-2; i++)
    {
       if (s.substr(s.length()-2,2) == s.substr(i,2))
       {
          cnt++;
       }
       
    }
    cout<<cnt<<endl;
    cout<<s.substr(s.length()-2,2);
}