#include<iostream>
using namespace std;
int main()
{
    int i;
    string demo;
    cout<<"Input Your Character : ";
    getline(cin, demo);
    
        if (demo.length() < 2)
      {
       cout<<demo;
      }
    else
      {
          for (i = 0; i < 5; i++)
          {
               string value = demo.substr(0, 2);
                cout<<value<<" " ;
          }
          
    }
}   
  