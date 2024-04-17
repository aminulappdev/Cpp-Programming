#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool check(int a){
   return (a>=90 and a<=110) or (a>=190 and a<=210)? true: false;
}
int main() {
   int a,b;
   cin >> a ;
   cout<<check(a);
    return 0;
}
//Solve

// #include <iostream>

// using namespace std;

// bool test(int x)
//         {
//               if(abs(x - 100) <= 10 || abs(x - 200) <= 10)
//                 return true;
//             return false;
//         }
        
// int main() 
//  {
//   cout << test(103) << endl;  
//   cout << test(90) << endl;  
//   cout << test(89) << endl;  
//   return 0;    
// }
