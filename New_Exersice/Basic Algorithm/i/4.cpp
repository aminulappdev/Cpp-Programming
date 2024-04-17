#include<iostream>
using namespace std;
// max value 
int main(){
    int a,max;
    int num[] = {2,9,7,3,4};
    max = num[0];
    for (int  i = 0; i < 5; i++)
    {
        
        if (max < num[i])
        {
            max = num[i];
        }
        
    }
    cout<<max;
}