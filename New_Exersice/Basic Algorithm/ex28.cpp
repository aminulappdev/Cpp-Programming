#include<iostream>
using namespace std;
int main(){
    string s = "Python";
    for (int i = 0; i <= s.length(); i++)
    {
       if (i%2 == 0)
       {
        cout<<s[i];
       }
       
    }
}