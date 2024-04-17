#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main() {
   string a;
   int b;
   cin>>a>>b ;
   string s = a.erase(b,1);
   cout<<s;
   return 0;
}

//Solve

// #include <iostream>
// using namespace std;
// string test(string str, int n)
//         {
//             return str.erase(n, 1);
//         }
        
// int main() 
//  {
//   cout << test("Python", 1) << endl;  
//   cout << test("Python", 0) << endl;  
//   cout << test("Python", 4) << endl;  
//   return 0;    
// }
