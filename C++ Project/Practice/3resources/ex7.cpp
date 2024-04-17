#include<iostream>
using namespace std;
string str(string st){
        return st.length() > 1?  st.substr(st.length()-1) + st.substr(1,st.length()-2) + st.substr(0,1) : st;
}

int main(){
    cout<<str("abcd")<<endl;
    cout<<str("a")<<endl;
    cout<<str("xy")<<endl;
}