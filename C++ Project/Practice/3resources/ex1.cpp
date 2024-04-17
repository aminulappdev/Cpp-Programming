#include<iostream>
using namespace std;

int sum(int n1, int n2){
    return (n1 == n2)? (n1 + n2)*3 : (n1 + n2);
    // if (n1 == n2)
    // {
    //     return (n1 + n2)*3;
    // }
    // else
    // {
    //     return (n1 + n2);
    // }
}

int main(){
    int n1,n2;
    cout<<sum(1,2)<<endl;
    cout<<sum(3,2)<<endl;
    cout<<sum(2,2)<<endl;
}