#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

class EBS
{
public:
    map<string, string> passenger_info[4];
    string info[4];
    void add_passenger();
    void payment_passenger();

    void show_data()
    {
        cout << "------------------------------------------" << endl;
        cout << "             Your Information             " << endl;
        cout << "------------------------------------------" << endl;
        for (int i = 0; i < 4; i++)
        {
            if (i == 0)
            {
                cout << "Your name : ";
            }
            else if (i == 1)
            {
                cout << "Your Id : ";
            }
            else if (i == 2)
            {
                cout << "Your Address : ";
            }
            else if (i == 3)
            {
                cout << "Last month current Bill : ";
            }
            cout << passenger_info[i][info[1]] << endl;
        }
        cout << "------------------------------------------" << endl;
    }

    void search_passenger()
    {
        string id;
        cout << "Enter your ID : ";
        cin >> id;
        if (id == info[1])
        {
            for (int i = 0; i < 4; i++)
            {
                if (i == 0)
                {
                    cout << "Your name : ";
                }
                else if (i == 1)
                {
                    cout << "Your Id : ";
                }
                else if (i == 2)
                {
                    cout << "Your Address : ";
                }
                else if (i == 3)
                {
                    cout << "Current month unit : ";
                }
                cout << passenger_info[i][info[1]] << endl;
            }
        }
        else
        {
            cout << "------------------------------------------" << endl;
            cout << "            passenger is not found!!           " << endl;
            cout << "------------------------------------------" << endl;
        }
    }

    void edit_passenger()
    {
    }

    void delete_passenger()
    {
        string id;
        cout << "Enter your ID : ";
        cin >> id;
        if (id == info[1])
        {
            for (int i = 0; i < 4; i++)
            {
                passenger_info[i].erase(info[1]);
            }
            cout << "------------------------------------------" << endl;
            cout << "           Delete successfully            " << endl;
            cout << "------------------------------------------" << endl;
        }
        else
        {
            cout << "------------------------------------------" << endl;
            cout << "       passenger is not found for delete!!     " << endl;
            cout << "------------------------------------------" << endl;
        }
    }
    
};

void EBS::add_passenger()
{

    ofstream file;
    file.open("passenger_info.txt",ios::out | ios::app);
    cout << "Enter your information." << endl;
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            cout << "Enter your name : ";
            file<<"Your name is : ";
            fflush(stdin);
        }
        else if (i == 1)
        {
            cout << "Enter your Id : ";
            file<<"Your ID is : ";
        }
        else if (i == 2)
        {
            cout << "Enter your Address : ";
            file<<"Your address is : ";
        }
        else if (i == 3)
        {
            cout << "Current month unit : ";
            file<<"Current month unit : ";
        }

        getline(cin, info[i]);
        file<<info[i]<<endl;
    } 
    file<<endl;
    file.close();
    for (int j = 0; j < 4; j++)
    {
        passenger_info[j].insert({info[1], info[j]});
    }

    cout << "------------------------------------------" << endl;
    cout << "         Data Added Successfully          " << endl;
    cout << "------------------------------------------" << endl;
}

void EBS::payment_passenger()
{
    ofstream file;
    file.open("passenger_info.txt",ios::out | ios::app);
     string id;
        cout << "Enter your ID : ";
        cin >> id;
        if (id == info[1])
        {
            int l_unit = 0;
            string c_unit = info[3];
            int cm_unit = stoi(c_unit);
            int bil = (cm_unit - l_unit) * 7;
            cout << "------------------------------------------" << endl;
            cout << info[0] << endl;
            cout << "You have used electricity this month : " << (cm_unit - l_unit) << endl;
            cout << "Your Bill is : " << bil << endl;
            cout << "------------------------------------------" << endl;
            cout << "         Thanks for Payment               " << endl;
            cout << "------------------------------------------" << endl;
            l_unit = cm_unit;
            file << "------------------------------------------" << endl;
            file << info[0] << endl;
            file << "You have used electricity this month : " << (cm_unit - l_unit) << endl;
            file << "Your Bill is : " << bil << endl;
            file << "------------------------------------------" << endl;
            file << "         Thanks for Payment               " << endl;
            file << "------------------------------------------" << endl;
        }
        else
        {
            cout << "------------------------------------------" << endl;
            cout << "       passenger is not found!!                " << endl;
            cout << "------------------------------------------" << endl;
        }
}

//----------------------------------------------------------
//            Main Function Start here
//----------------------------------------------------------

int main()
{
    EBS system;

    cout << "------------------------------------------" << endl;
    cout << "''''''  Electricity Billing System  ''''''" << endl;
    cout << "------------------------------------------" << endl;
    while (true)
    {

        int choice;
        cout << "[1] Add passenger" << endl;
        cout << "[2] Show passenger" << endl;
        cout << "[3] Search passenger" << endl;
        cout << "[4] Update passenger" << endl;
        cout << "[5] Delete passenger" << endl;
        cout << "[6] Payment System" << endl;
        cout << "[7] Exit" << endl << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system.add_passenger();
            break;
        case 2:
            system.show_data();
            break;
        case 3:
            system.search_passenger();
            break;
        case 4:
            system.edit_passenger();
            break;
        case 5:
            system.delete_passenger();
            break;
        case 6:
            system.payment_passenger();
            break;
        case 7:
            break;
        default:
            break;
        }
    }
}
