#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;

    char st[n];
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        cin >> st[i];
    }
    for(int i=0; i<n; i++)
    {
        if(st[i]==st[i+1])
        {
            cnt++;
        }
    }
    cout << cnt;

}




