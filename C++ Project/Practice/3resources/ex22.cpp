#include<iostream>
using namespace std;
int main(){
    string str;
    int i,count=0;
    cin>>str;
    for ( i = 0; i < str.length() ; i++)
    {
       if (str[i] == 'z')
       {
         ++count;
       }
    }
    if (count == 2 || count == 4)
    {
        cout<<"Count are : "<<count<<endl;
        cout<<true;
    }
    else
    {
        cout<<"Count are : "<<count<<endl;
        cout<<false;
    }
}