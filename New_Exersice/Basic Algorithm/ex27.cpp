#include<iostream>
using namespace std;

void test(string s)
{
    int cnt =0;
    for (int i = 0; i <= s.length() -1; i++)
    {
        if (s[i] == 'a')
         {
             cnt++;

            if (s.substr(i,2) == "aa" and cnt<2)
            {
                cout<<1<<endl;
            }
            
         }
    }
    cout<<0<<endl;
}

int main()
{
   test("bbaccaag");
   //test("jjkiaaasew");
   //test("JSaaakoiaa");
}