#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int a;
    cout<<"Enter your age :";
    cin>>a;
    cin.ignore();
    cout<<"Enter your name :";
    getline(cin, s);
    cout<<endl<<a<<endl;
    cout<<s<<endl;
    

    return 0;
}