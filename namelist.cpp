#include <iostream>
#include <conio.h>

//zbieranie danych

using namespace std;


string tab[5];

int main()
{
   for(int i=0; i<5; i++)
   {
       cout<<"Podaj"<<i+1<<"nazwisko: ";
       getline(cin,tab[i]);
   }

    cout<<"Zapisane w spisie: "<<endl;
    for(int i=0;i<5;i++)
    cout<<i+1<<"."<<tab[i]<<endl;
    getch();

    return 0;

}

