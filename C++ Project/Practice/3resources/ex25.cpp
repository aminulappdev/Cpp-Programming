#include<iostream>
using namespace std;
void check(string a, int b){
        for (int i = 0; i < b; i++)
        {
           for (int j = 0; j < 3; j++)
           {
             cout<<a[j];
           }
        }
        cout<<endl;
}

int main(){
    check("Python",2);
    check("Python",3);
    check("JS",4);
}