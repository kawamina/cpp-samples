#include <iostream>
#include <string>

using namespace std;

float liczba1;
float liczba2;
int wybor;

void dodaj(int x, int y);
void odejmij(int x, int y);
void razy(int x, int y);
void przez(int x, int y);

int main()
{
    cout<<"Podaj liczbe 1: "<<endl;
    cin>>liczba1;
    cout<<"Podaj liczbe 2: "<<endl;
    cin>>liczba2;
    cout<<"Wybierz dzialanie numer: "<<endl<<"1. Dodawanie"<<endl<<"2.Odejmowanie"<<endl<<"3.Mnozenie"<<endl<<"4.Dzielenie"<<endl;
    cin>>wybor;

    switch(wybor)
    {
    case 1:
        dodaj(liczba1,liczba2);
    break;
    case 2:
        odejmij(liczba1,liczba2);
    break;
    case 3:
        razy(liczba1,liczba2);
    break;
    case 4:
        przez(liczba1,liczba2);
    break;
    default: cout<<"Nie da sie wykonac polecenia!";
    }
    return 0;
}
void dodaj(int x, int y)
{
    cout<<"Suma="<<x+y;
}
void odejmij(int x, int y)
{
    cout<<"Roznica="<<x-y;
}
void razy(int x, int y)
{
    cout<<"Mnozenie"<<x*y;
}
void przez(int x, int y)
{
    cout<<"Roznica="<<x/y;
}
