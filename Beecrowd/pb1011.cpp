#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    float n = 3.14159;
    cin>>a;
    float r = ((4/3.0)*n*(a*a*a));
    cout<< fixed << setprecision(3) <<"Volume = "<<r<<endl;

    return 0;
}

