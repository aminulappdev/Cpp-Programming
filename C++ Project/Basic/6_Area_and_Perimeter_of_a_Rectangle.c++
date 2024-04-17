#include<iostream>
using namespace std;
int main()
{
    int length,width;
    float area;
    float perimeter;
    
    cout<<"Input the length of a rectangle : ";
    cin>>length;
    cout<<"Input the width of a rectangle : ";
    cin>>width;
    area = length*width;
    perimeter = 2*(length+width);

    cout<<"The area of the rectangle is : "<<area<<endl;
    cout<<"The perimeter of the rectangle is : "<<perimeter;

}