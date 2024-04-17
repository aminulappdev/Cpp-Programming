#include<iostream>
using namespace std;
bool test(int num1, int num2){
        return (num1 > 0 and num2 < 0 || num1 < 0 and num2 > 0);
}

int main(){
   
    cout<<test(120,-1)<<endl;
    cout<<test(-1,120)<<endl;
    cout<<test(-2,-120)<<endl;
}