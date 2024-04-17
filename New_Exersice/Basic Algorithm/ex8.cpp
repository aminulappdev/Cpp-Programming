#include <iostream>
#include <string.h>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
   string a;
   getline(cin,a);
   if (a.length()>1)
   {
    cout<<a.substr(0,2)<<a.substr(0,2)<<a.substr(0,2)<<a.substr(0,2);
   }
   else
   {
    cout<<a;
   }
   return 0;
}

//Solve
// #include <iostream>
// using namespace std;

// string test(string str)
//         {
//              return str.length() < 2 ? str : str.substr(0, 2) + str.substr(0, 2) + str.substr(0, 2)  + str.substr(0, 2); 
//         }
        
// int main() 
//  {
//   cout << test("C Sharp") << endl;  
//   cout << test("JS") << endl;  
//   cout << test("a") << endl;  
//   return 0;    
// }
