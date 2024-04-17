#include<iostream>
using namespace std;
int main()
{
    int first,second,third;
    cout<<"Input the 1st angle of the triangle :";
    cin>>first;
    cout<<"Input the 2nd angle of the triangle :";
    cin>>second;
    third = 180-(first + second);
    cout<<"The 3rd of the triangle is :"<<third;
}