#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
// bool check(int a,int b){
//    return ((a>=20 and a<=50) and (b>=20 and b<=50))? false: ((a>=20 and a<=50) or (b>=20 and b<=50))? true : false;
// }
// int main() {
//    int a,b;
//    cin >> a >> b;
//    cout<<check(a,b);
//    return 0;
// }

//Solve
// #include <iostream>
// using namespace std;
// bool test(int x, int y)
//         {
//             return (x <= 20 || y >= 50) || (y <= 20 || x >= 50);
//         }
        
// int main() 
//  {
//   cout << test(20, 84) << endl;  
//   cout << test(14, 50) << endl;  
//   cout << test(11, 45) << endl;  
//   cout << test(25, 40) << endl;    
//   return 0;    
// }

int main()
{
   int a,b;
   cin>>a>>b;
   if ( (a>=20 and a<=50) and (b>=20 and b<=50))
   {
      cout<<false;
   }
   else if ((a>=20 and a<=50) or (b>=20 and b<=50))
   {
      cout<<true;
   }
   else
   {
      cout<<false;
   }
   
}