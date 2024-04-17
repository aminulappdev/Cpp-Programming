#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
string check(string a){
   return a.length() > 2 and a.substr(1,2)=="yt"?a.erase(1,2):a;
}
int main() {
   string a;
   cin >> a ;
   cout<<check(a);
    return 0;
}

//Solve

// #include <iostream>
// using namespace std;
// string test(string str)
//         {
//             return str.substr(1, 2)=="yt" ? str.erase(1, 2) : str;
//         }
        
// int main() 
//  {
//   cout << test("Python") << endl;  
//   cout << test("ytade") << endl;  
//   cout << test("jsues") << endl;  
//   return 0;    
// }
