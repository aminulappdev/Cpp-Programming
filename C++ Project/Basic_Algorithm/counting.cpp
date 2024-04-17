#include<iostream>
using namespace std;
int main()
{
    // Counting  number 
    int num1,num2,sum,mul;
    int count_sum = 0;
    int count_mul = 0;
    cout<<"Enter your first number : ";
    cin>>num1;
    cout<<"Enter your second number : ";
    cin>>num2;
    sum = num1 + num2;
    mul = num1 * num2;
    while (sum!=0)
    {
        sum = sum/10;
        count_sum++;
    }
    while (mul!=0)
    {
        mul = mul/10;
        count_mul++;
    }
    cout<<"Digit of sum value : "<<count_sum<<endl;
    cout<<"Digit of mul value : "<<count_mul<<endl;

}