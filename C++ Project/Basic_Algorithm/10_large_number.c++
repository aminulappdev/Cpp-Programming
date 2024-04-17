#include <iostream>
using namespace std;

int test(int x, int y, int z)
        {
            int result = max(x, max(y, z));
            return result;
        }
        
int main() 
 {
     int n1,n2,n3;
   cin>>n1>>n2>>n3;
   test(n1,n2,n3);
   cout<<test(n1,n2,n3);
  return 0;    
}
