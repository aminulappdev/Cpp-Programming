#include<iostream>
using namespace std;
string str(string st){
      if (st.length() >= 2 and st.substr(0,2) == "if" )
      {
        return st;
      }
      else
      {
        return "if " + st;
      }
       
}

int main(){
    cout<<str("if else")<<endl;
    cout<<str("else")<<endl;
}