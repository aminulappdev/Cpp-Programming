#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
bool check(int a, int b){
   return (a == 30) or (b == 30) or ((a+b) ==30)? true: false;
}
int main() {
   int a,b;
   cin >> a >> b ;
   cout<<check(a,b);
    return 0;
}