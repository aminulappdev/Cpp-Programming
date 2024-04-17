#include<iostream>
using namespace std;

class room
{
    public:
    int desk,pc,projector;
    string name;
    void add(int lav_desk,int lav_pc,int lav_projector,string lav_name)
    {
        name = lav_name;
        desk = lav_desk;
        pc = lav_pc;
        projector = lav_projector;
    }
    void show()
    {
        cout<<"Lav name is : "<<name<<endl<<"Lav desk number is : "<<desk<<endl<<"Lav pc number is : "<<pc<<endl<<"Lav projector number is : "<<projector<<endl;
    }
};


int main()
{  
  room cse,eee,civil;
  int d,p,pj;
  string n;
  cin>>d>>p>>pj;
  cin>>n;
  cse.add(d,p,pj,n);
  cse.show();
}