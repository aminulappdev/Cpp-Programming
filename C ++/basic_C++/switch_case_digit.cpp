#include<iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"Type Your Digit : ";
    cin>>digit;
    switch (digit)
    {
    case 0: 
     cout<<"Zero";
        break;
        case 1: 
     cout<<"One";
        break;
        case 2: 
     cout<<"Two";
        break;
        case 3: 
     cout<<"Three";
        break;
        case 4: 
     cout<<"Four";
        break;
        case 5: 
     cout<<"Five";
        break;
        case 6: 
     cout<<"Six";
        break;
         case 7: 
     cout<<"Seven";
        break;
    default:
     cout<<"Error";
    }
}