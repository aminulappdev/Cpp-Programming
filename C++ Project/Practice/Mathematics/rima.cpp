#include <iostream>
using namespace std;

int main()
{
    int i,n = 10;
    float num[10], sum=0.0, average;
    for(i = 0; i < 10; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average = " << average;
    return 0;
}