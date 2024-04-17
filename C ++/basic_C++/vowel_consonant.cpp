#include<iostream>
using namespace std;
int main ()
{
 char ch;
 cout <<"Input Your Letter : ";
 cin>>ch;
 if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch =='o'|| ch =='u'||ch =='A'||ch =='E'||ch =='I'||ch =='o'||ch =='U')
  {
    cout<<"Vowel";
  }
  else 
    cout<<"Consonant";
}