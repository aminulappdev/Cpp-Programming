#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool _max(int a, int b)
{
   return (abs(a % 10)) == (abs(b % 10));
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
// bool test(int x, int y)
//         {
//             return abs(x % 10) == abs(y % 10);
//         }
        
// int main() 
//  {
//   cout << test(123, 456) << endl;  
//   cout << test(12, 512) << endl;  
//   cout << test(7, 87) << endl;  
//   cout << test(12, 45) << endl;  
//   return 0;    
// }
