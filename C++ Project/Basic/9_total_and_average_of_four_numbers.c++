#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,avrge,sum;
    
    cout<<"Type of Four Numbers : ";
    cin>>n1>>n2>>n3>>n4;
    sum = n1 + n2 + n3 + n4;
    avrge = (n1 + n2 + n3 + n4)/4;
    cout<<"The total of four numbers is : "<<sum<<endl;
    cout<<"The average of four numbers is : "<<avrge;

}