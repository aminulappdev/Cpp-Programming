#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool check(int a){
   return (a % 3 == 0) or (a % 7 == 0)? true: false;
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
// bool test(int n)
//         {
//             return n % 3 == 0 || n % 7 == 0;
//         }
        
// int main() 
//  {
//   cout << test(3) << endl;  
//   cout << test(14) << endl;  
//   cout << test(12) << endl;  
//   cout << test(37) << endl;  
//   return 0;    
// }
