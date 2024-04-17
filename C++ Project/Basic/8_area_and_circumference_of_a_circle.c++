#include<iostream>
using namespace std;
int main()
{
    int redius;
    float area,circumference;
    float pie = 3.1416;
    cout<<"Input the radius of a circle :";
    cin>>redius;
    area = pie*(redius*redius);
    circumference = 2*pie*redius;
    cout<<"The area of the circle is : "<<area<<endl;
    cout<<"The circumference of the circle is : "<<circumference;

}