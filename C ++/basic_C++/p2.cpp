#include<iostream>
using namespace std;


void bigger(int a,int b,int c)
{
    if(a>b and a>c)
    {
        cout<<"a is big"<<endl;
    }
    else if(b>a and b>c)
    {
        cout<<"b is big"<<endl;
    }
    else if(c>a and c>b)
    {
        cout<<"b is big"<<endl;
    }
     else if(a==b and a>c)
    {
        cout<<"a & b is big"<<endl;
    }
    else if(a==b and a>c)
    {
        cout<<"a & b is big"<<endl;
    }
    else if(a==c and a>b)
    {
        cout<<"a & c is big"<<endl;
    }
    else if(b==c and b>a)
    {
        cout<<"b & c is big"<<endl;
    }

}


int main()
{
    bigger(5,9,4);
    bigger(5,9,9);
    bigger(5,5,4);
}
