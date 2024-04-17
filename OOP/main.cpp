#include <iostream>
#include<map>

using namespace std;
class BMS
{
    private:
        map<string,string> passengerInfo[4];// 0=id,pass,name

    public:
        void passenger_login();
        void passenger_add(string info[]);
        //void passenger_search(string id);
};

void BMS:: passenger_add(string info[])
{
    for (int i=0;i<4;i++)
    {
       passengerInfo[i].insert({info[0],info[i]});
    }
}

// void BMS:: passenger_search(string id)
// {
//     for (int i=0;i<4;i++)
//     {
//        cout<<passengerInfo[i][id]<<endl;
//     }

// }

int main()
{
    BMS oj;
    string info[4]={"12111005","Fazle","Fazle","fazla@gmail.com"};
    oj.passenger_add(info);
    //oj.passenger_search("12111005");
    return 0;
}
