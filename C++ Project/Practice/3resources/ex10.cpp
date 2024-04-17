#include<iostream>
using namespace std;
bool test(int num){
        return (num % 3 == 0 || num %7 == 0);
}

int main(){
    int num;
    cin>>num;
    cout<<test(num)<<endl;
}