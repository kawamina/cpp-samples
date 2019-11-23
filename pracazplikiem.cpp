#include <iostream>
#include <fstream>

using namespace std;

string imie, rasa;
int adres;

int main()
{
    cout<<"Podaj imie psa: ";
    cin>>imie;
    cout<<"Podaj rase: ";
    cin>>rasa;
    cout<<"Podaj adres wlasciciela: ";
    cin>>adres;

    fstream plik;
    plik.open("dane.txt", ios::out | ios::app);

    plik<<imie<<endl;
    plik<<rasa<<endl;
    plik<<adres<<endl;

    plik.close();



    return 0;
}

//Gra w zgadniecie tej samej liczby z Johnnym
