#include<iostream>
using namespace std;
void check(string a){
        int c = 0;
        for (int i = 0; i < a.length()-1; i++)
        {
            if (a.substr(i,2) == "aa")
            {
                ++c;
            }
            
        }
        cout<<c<<endl;
}

int main(){
    check("Pythonaaaa");
    check("Python");
    check("JS");
}