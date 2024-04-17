#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n3;
  cout<<"Input Your Three Values : ";
  cin>>n1>>n2>>n3;
  if(n1>n2 && n1>n3)
  {
      cout<<"Number 1 is Big";
  }
  else if(n2>n1 && n2>n3)
  {
      cout<<"Number 2 is Big : "<<n2;
  }
  else if(n3>n1 && n3>n2)
  {
      cout<<"Number 3 is Big";
  }
 else
 cout<<"Number Are Equal";
}
