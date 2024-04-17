#include<iostream>
using namespace std;
void check(string a, int b){
        for (int i = 0; i < b; i++)
        {
            cout<<a;
        }
        cout<<endl;
}

int main(){
    check("JS",2);
    check("JS",3);
    check("JS",4);
}