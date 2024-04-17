#include <iostream>
#include<map>

using namespace std;
class BMS
{
    private:
        map<string,string> passengerInfo[4];// 0=id,1=pass,2=name,3=email

    public:
        void passenger_login();
        void passenger_add();
        void passenger_search(string id);
        void passenger_edit(string id);
        void passenger_delete(string id);
};


void BMS:: passenger_add()
{
    string info[4]={"","","",""};
    cout<<"Id:";
    cin>>info[0];
    cout<<"Name:";
    cin>>info[1];
    cout<<"Password:";
    cin>>info[2];
    cout<<"Email:";
    cin>>info[3];
    if(passengerInfo[0].find(info[0])== passengerInfo[0].end())
    {
        for (int i=0;i<4;i++)
        {
           passengerInfo[i].insert({info[0],info[i]});
        }
        cout<<"Add Successfully..."<<endl;
    }
    else
    {
        cout<<"This Id Already added!!!\n";
    }

}

void BMS:: passenger_search(string id)
{
    if(passengerInfo[0].find(id)== passengerInfo[0].end())
    {
        cout<<"Value Not found!!"<<endl;
    }
    else
    {
        cout<<"Search Successfully..."<<endl;
        for (int i=0;i<4;i++)
        {
           cout<<passengerInfo[i][id]<<endl;
        }

    }
}

void BMS:: passenger_edit(string id)
{
    string info[4]={"","","",""};
    cout<<"Name:";
    cin>>info[1];
    cout<<"Password:";
    cin>>info[2];
    cout<<"Email:";
    cin>>info[3];

    if(passengerInfo[0].find(id)== passengerInfo[0].end())
    {
        cout<<"Value Not found for edit!!"<<endl;
    }
    else
    {
       for (int i=1;i<4;i++)
        {
           passengerInfo[i][id]=info[i];
        }
        cout<<"Edit Successfully..."<<endl;
    }

}

void BMS:: passenger_delete(string id)
{

    if(passengerInfo[0].find(id)== passengerInfo[0].end())
    {
        cout<<"Value Not found for delete!!"<<endl;
    }
    else
    {
       for (int i=0;i<4;i++)
        {
           passengerInfo[i].erase(id);
        }
        cout<<"Delete Successfully..."<<endl;
    }

}

int main()
{
    BMS oj;

    int n;
    string tempId;
    while(true)
    {
        cout<<"Bank management System\n";
        cout<<"Press 1 for Add\n";
        cout<<"Press 2 for Search\n";
        cout<<"Press 3 for Edit\n";
        cout<<"Press 4 for Delete\n";
        cout<<"Press 5 for Exit\n";
        cin>>n;

        if(n==1)
        {
            oj.passenger_add();
        }
        else if(n==2)
        {
            cout<<"Enter passenger ID:";
            cin>>tempId;
            oj.passenger_search(tempId);
        }
        else if(n==3)
        {
            cout<<"Enter passenger ID:";
            cin>>tempId;
            oj.passenger_edit(tempId);
        }
        else if(n==4)
        {
            cout<<"Enter passenger ID:";
            cin>>tempId;
            oj.passenger_delete(tempId);
        }
        else if(n==5)
        {
           break;
        }
    }

    return 0;
}
