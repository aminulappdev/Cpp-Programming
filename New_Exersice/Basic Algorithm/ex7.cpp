#include <iostream>
#include <string.h>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
   string a;
   cin>>a;
   if (a.length()>1)
   {
    cout<<a.substr(a.length()-1)<<a.substr(1,a.length()-2)<<a.substr(0,1);
   }
   return 0;
}

//Solve
// #include <iostream>
// using namespace std;

// string test(string str)
//         {
//             return str.length() > 1
//                 ? str.substr(str.length() - 1) + str.substr(1, str.length() - 2) + str.substr(0, 1) : str;
//         }
        
// int main() 
//  {
//   cout << test("abcd") << endl;  
//   cout << test("a") << endl;  
//   cout << test("xy") << endl;  
//   return 0;    
// }
