#include<iostream>
using namespace std;
int test(int num1, int num2){
    int t1 = abs(num1 - 100);
    int t2 = abs(num2 - 100);
    if (t1 < t2)
    {
       return num1;
    }
    else if (num1 == num2)
    {
        return 0 ;
    }
    
    else
    {
        return num2;
    }
}

int main(){
   
    cout<<test(78,95)<<endl;
    cout<<test(95,95)<<endl;
    cout<<test(99,70)<<endl;
}