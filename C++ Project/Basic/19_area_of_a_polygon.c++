#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n,l,area;
    cout<<"Input the number of sides of the polygon: ";
    cin>>n;
    cout<<"Input the length of each side of the polygon:";
    cin>>l;
    area = (n*(l*l))/(4.0 * tan(M_PI/n));
    cout<<"The area of the polygon is: "<<area;

}