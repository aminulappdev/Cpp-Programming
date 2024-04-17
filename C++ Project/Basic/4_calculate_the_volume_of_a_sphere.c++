#include<iostream>
using namespace std;
int main()
{
    int redius;
    float sphere;
    float pie = 3.1416;
    cout<<"Input the radius of a sphere :";
    cin>>redius;
    sphere = (4*pie*redius*redius*redius)/3;
    cout<<"The volume of a sphere is : "<<sphere;

}