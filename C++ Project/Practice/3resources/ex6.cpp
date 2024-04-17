#include<iostream>
using namespace std;
string str(string st ,int x){
        return st.erase(x,1);
}

int main(){
    cout<<str("python", 1)<<endl;
    cout<<str("python", 0)<<endl;
    cout<<str("python", 4)<<endl;
}