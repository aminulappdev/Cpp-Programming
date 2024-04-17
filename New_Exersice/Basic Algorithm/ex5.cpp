#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
string check(string a){
   return a.length() > 2 and a.substr(0,2)=="if"?a: "if " + a;
}
int main() {
   string a;
   getline(cin,a) ;
   cout<<check(a);
    return 0;
}

//Solve 

// #include <iostream>

// using namespace std;

// string test(string s)
//         {
//             if (s.length() > 2 && s.substr(0, 2)=="if")
//             {
//                 return s;
//             }
//             return "if " + s;
//         }
        
// int main() 
//  {
//   cout << test("if else") << endl;  
//   cout << test("else") << endl;  
//   return 0;    
// }
