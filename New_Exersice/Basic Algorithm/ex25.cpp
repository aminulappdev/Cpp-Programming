#include <iostream>
using namespace std;

void test(string s, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << s.substr(0,3);
    }
}

int main()
{
    string s;
    int n;
    cin>>s;
    cin >> n;
    test(s, n);
    return 0;
}

