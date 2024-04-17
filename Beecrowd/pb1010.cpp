#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int p1_code,p1_unit,p2_code,p2_unit;
    float p1_price,p2_price;
    cin>>p1_code>>p1_unit>>p1_price;
    cin>>p2_code>>p2_unit>>p2_price;
    float result = ((p1_unit * p1_price) + (p2_unit * p2_price));
    cout<< fixed << setprecision(2) <<"VALOR A PAGAR: R$ "<<result<<endl;

    return 0;
}

