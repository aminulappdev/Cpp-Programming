#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool check(int a,int b, int c){
   return ((a>=20 and a<=50) and (b>=20 and b<=50)) or ((b>=20 and b<=50) and (c>=20 and c<=50)) or ((c>=20 and c<=50) and (a>=20 and a<=50))? true: false;
}
int main() {
   int a,b,c;
   cin >> a >> b >> c;
   cout<<check(a,b,c);
   return 0;
}

//Solve
// #include <iostream>
// using namespace std;

// bool test(int x, int y, int z)
//         {
//             return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
//         }
        
// int main() 
//  {
//   cout << test(11, 20, 12) << endl;  
//   cout << test(30, 30, 17) << endl;  
//   cout << test(25, 35, 50) << endl;  
//   cout << test(15, 12, 8) << endl;    
//   return 0;    
// }
