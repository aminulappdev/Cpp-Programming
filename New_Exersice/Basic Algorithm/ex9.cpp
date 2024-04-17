#include <iostream>
#include <string.h>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
   string a;
   getline(cin,a);
   if (a.length()>=1)
   {
    cout<<a.substr(a.length()-1)<<a<<a.substr(a.length()-1);
   }
   return 0;
}