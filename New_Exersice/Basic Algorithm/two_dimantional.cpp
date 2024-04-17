#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, cnt = 0, k = 0;
    cin >> n >> m;
    int arr[n][m];
    int array[n * m + 2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            array[k] = arr[i][j];
            k++;
            cnt++;
        }
    }
    int maxx = array[0];
    for (int i = 0; i < cnt; i++)
    {
        if (maxx < array[i])
        {
            maxx = array[i];
        }
    }

    int freq[maxx + 1];
    for (int i = 0; i < maxx; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < cnt; i++)
    {
        freq[array[i]]++;
    }

    for (int i = 0; i <= maxx; i++)
    {
        if(freq[i]!=0)
        {
           cout << i << " -> " << freq[i] << endl;
        }
        
    }
}