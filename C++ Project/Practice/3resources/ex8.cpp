#include<iostream>
using namespace std;
void str(string st){
         if (st.length() >= 2)
         {
           for (int i = 0; i < 4; i++)
          {
            cout<<st.substr(0,2);
          }
          cout<<endl;
          }
         else
          {
            cout<<st;
          }
         
}

int main(){
    str("C Sharp");
    str("JS ");
    str("a");
}