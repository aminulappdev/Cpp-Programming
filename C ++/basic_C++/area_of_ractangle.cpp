#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float length,width,area;
    cout<<"Enter Your Length :";
    cin>>length;
    cout<<"Enter Your Width :";
    cin>>width;
    area= length*width;
    cout<<"Your area is : "<<setprecision(4)<<area;
}