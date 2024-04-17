#include<iostream>
using namespace std;

int dif(int v){
    return v>51? (v-51)*3: abs(v-51);
}
int main(){
    
    int n;
    cin>>n;
    cout<<dif(n);

}