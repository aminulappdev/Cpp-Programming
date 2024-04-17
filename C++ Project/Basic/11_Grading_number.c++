#include<iostream>
using namespace std;
int main()
{
    while (1)
    {
    int number;
    cout<<"Enter your mark : ";
    cin>>number;
    if (number >= 80 && number <= 100)
    {
       cout<<"Your result is A+"<<endl;
    }
   else if ((number >= 70 && number < 80))
    {
        cout<<"Your result is A"<<endl;
    }
   else if ((number >= 60 && number < 70))
    {
        cout<<"Your result is A-"<<endl;
    }
    else if ((number >= 50 && number < 60))
    {
        cout<<"Your result is B"<<endl;
    }
   else if ((number >= 40 && number < 50))
    {
        cout<<"Your result is C"<<endl;
    }
    
   else if ((number >= 33 && number < 40))
    {
        cout<<"Your result is D"<<endl;
    }
    else if ((number >= 0 && number < 33))
    {
        cout<<"Fail"<<endl;
    }
    else
    {
        cout<<"Unexpected number"<<endl;
    }
    
    }
    
}
