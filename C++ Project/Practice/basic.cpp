#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string name = "Aminul";
    string name2 = "Al Imran";
    int num = 1976672506;
    string s_num = "9542687";
    int arr[] = {5,9,8,2,4,6};
    
    // Function Start ........................
    name.append("h"); 
    name.clear();
    name.append("new name"); // Only String
    char com = name.compare(name2);
    // name2.erase(3,5);
    int f = name.find("me"); // Only String
    int s = name2.size(); // Only String
    int l = name2.length(); // Only String
    string st = name2.substr(0,3); // Only String
    sort(s_num.begin(),s_num.end()); // Adding ==> #include<algorithm>
    // Function end ..........................
    
    cout<<name<<endl;
    cout<<name2<<endl;
    // cout<<com;
    cout<<f<<endl;
    cout<<s<<endl;
    cout<<l<<endl;
    cout<<num<<endl;
    cout<<st<<endl;
    cout<<s_num<<endl;
}