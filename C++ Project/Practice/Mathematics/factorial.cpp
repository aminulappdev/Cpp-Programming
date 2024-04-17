#include<iostream>
using namespace std;
int main(){
    int num;
    int fact = 1;
    cout<<"Factorial number : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout<<fact<<endl;
}