#include <iostream>
#include <string>

using namespace std;

float liczba1;
float liczba2;
int wybor;

float dodaj(int x, int y)
{
    return x+y;
}
float odejmij(int x, int y)
{
    return x-y;
}
float razy(int x, int y)
{
    return x*y;
}
float przez(int x, int y)
{
    return x/y;
}

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
        cout<<"Suma="<<dodaj(liczba1,liczba2);
    break;
    case 2:
        cout<<"Roznica="<<odejmij(liczba1,liczba2);
    break;
    case 3:
        cout<<"Iloczyn="<<razy(liczba1,liczba2);
    break;
    case 4:
        cout<<"Iloraz="<<przez(liczba1,liczba2);
    break;
    default: cout<<"Nie da sie wykonac polecenia!";
    }
    return 0;
}
