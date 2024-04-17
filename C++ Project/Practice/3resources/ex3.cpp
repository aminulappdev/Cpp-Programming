#include<iostream>
using namespace std;
int check(int a, int b){
    return (a== 30 || b == 30 || (a + b == 30))? true : false;
}
int main(){
    cout<<check(30,0)<<endl;
    cout<<check(25,5)<<endl;
    cout<<check(20,30)<<endl;
    cout<<check(20,25)<<endl;
}