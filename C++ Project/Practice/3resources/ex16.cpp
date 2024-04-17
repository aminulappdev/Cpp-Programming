#include<iostream>
using namespace std;
bool test(int num1, int num2){
    if ((num1 <= 20 || num2 >= 50) || (num1 >= 50 || num2 <= 20))
    {
        return true;
    }
}

int main(){
   
    cout<<test(20,84)<<endl;
    cout<<test(14,50)<<endl;
    cout<<test(24,40)<<endl;
}