#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool check(string a)
{
  int ctr = 0;
  for (int i = 0; i <= a.length(); i++)
  {
    if (a[i] == 'z')
    {
        ctr ++;
    }
    
  }
  if (ctr > 1 && ctr < 5)
   return true;
  
}    

int main()
{
   string a;
   cin >> a ;
   cout << check(a);
   return 0;
}

//Solve

// #include <iostream>
// using namespace std;
// bool test(string str)
//         {
//             int ctr = 0;

//             for (int i = 0; i < str.length(); i++)
//             {
//                 if (str[i] == 'z')
//                 {
//                     ctr++;
//                 }
//             }

//             return ctr > 1 && ctr < 4;
//         }      

        
// int main() 
//  {
//   cout << test("frizz") << endl;  
//   cout << test("zane") << endl;  
//   cout << test("Zazz") << endl;  
//   cout << test("false") << endl;  
//   return 0;    
// }


