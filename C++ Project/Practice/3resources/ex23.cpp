#include<iostream>
using namespace std;
bool check(int a, int b){
        return  a>0 and b>0 and a%10 == b%10;
}

int main(){
    cout<<check(123,456)<<endl;
    cout<<check(12,512)<<endl;
    cout<<check(-18,458)<<endl;
}