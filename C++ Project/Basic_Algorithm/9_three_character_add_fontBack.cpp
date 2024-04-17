#include<iostream>
using namespace std;
int main()
{
    int i;
    string demo;
    cout<<"input your value : ";
    getline(cin, demo);
    if (demo.length() < 3)
    {
        for ( i = 0; i < 3; i++)
        {
             cout<<demo; 
        }
    }
   else
   {
      string last = demo.substr(0, 3);
      cout<<last<<demo<<last;
   }
}