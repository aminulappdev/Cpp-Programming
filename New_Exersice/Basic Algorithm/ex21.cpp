#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int _max(int a, int b)
{
  if ((a>=20 && a<=30) && (b>=20 && b<=30))
  {
    return max(a,b);
  }
}    

int main()
{
   int a,b;
   cin >> a >> b;
   cout << _max(a, b);
   return 0;
}