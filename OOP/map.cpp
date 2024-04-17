#include<iostream>
#include<map>
using namespace std;

map<string,string> passengerInfo[4];// 0=id,pass,name

void passenger_add(string info[])
{
    for (int i=0;i<4;i++)
    {
       passengerInfo[i].insert({info[0],info[i]});
    }
}

void passenger_show(string id)
{
    for (int i=1;i<4;i++)
    {
       cout<<passengerInfo[i][id]<<endl;
    }
}
int main()
{
   
    string info[4]={"12111005","Fazle","12345","fazla@gmail.com"};
    passenger_add(info);
    passenger_show("12111005");
}