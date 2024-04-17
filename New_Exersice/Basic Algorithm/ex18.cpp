#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int _max(int a,int b, int c){
   return max(a,max(b,c));
}
int main() {
   int a,b,c;
   cin >> a >> b >> c;
   cout<<_max(a,b,c);
    return 0;
}

//Solved

// #include <iostream>
// using namespace std;
// int test(int x, int y, int z)
//         {
//             int result = max(x, max(y, z));
//             return result;
//         }
        
// int main() 
//  {
//   cout << test(1,2,3) << endl;  
//   cout << test(1,3,2) << endl;  
//   cout << test(1,1,1) << endl;  
//   cout << test(1,2,2) << endl;  
//   return 0;    
// }
