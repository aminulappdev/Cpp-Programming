#include<iostream>
using namespace std;
bool check(int x){
    return (abs(x-100) <= 10 || abs(x-200) <= 10) ? true : false;
}
int main(){
    cout<<check(103)<<endl;
    cout<<check(90)<<endl;
    cout<<check(89)<<endl;
}