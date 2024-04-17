#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float eq,equilateral;
    cout<<"Input the value of the side of the equilateral triangle : ";
    cin>>eq;
    equilateral = ((sqrt(3))*eq*eq)/4;
    cout<<"The area of equilateral triangle is : "<<equilateral;

}