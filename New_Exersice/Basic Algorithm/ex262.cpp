#include<iostream>
using namespace std;

void test(string s)
{
    int cnt = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s.substr(i,2) == "aa")
        {
            cnt++;
        }
        
    }
    
    cout<<cnt<<endl;
}

int main()
{
   test("bbaaccaag");
   test("jjkiaaasew");
   test("JSaaakoiaa");
}