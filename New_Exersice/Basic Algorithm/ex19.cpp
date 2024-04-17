#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int _max(int a, int b)
{
   int x = abs(a - 100);
   int y = abs(b - 100);
   if (x > y)
   {
      return b;
   }
   else if (a == b)
      return 0;
   else
      return a;
}
int main()
{
   int a, b, c;
   cin >> a >> b;
   cout << _max(a, b);
   return 0;
}

//Solve

// #include <iostream>
// using namespace std;
// int test(int x, int y)
//         {
//             const int n = 100;
//             int val = abs(x - n);
//             int val2 = abs(y - n);

//             return val == val2 ? 0 : (val < val2 ? x : y);
//         }
        
// int main() 
//  {
//   cout << test(78, 95) << endl;  
//   cout << test(95, 95) << endl;  
//   cout << test(99, 70) << endl;  
//   return 0;    
// }
