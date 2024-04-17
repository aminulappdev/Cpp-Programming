#include<iostream>
using namespace std;
int main()
{
    string demo;
    cout<<"Input your Value : ";
    getline(cin, demo);
    string last = demo.substr(demo.length()-1); 
    cout<<last<<demo<<last;
}