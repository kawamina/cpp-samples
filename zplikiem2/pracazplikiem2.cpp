#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

//cwiczenie na podstawie pasji progr

string temat, nick;
string zapytanie[5];
string odpA[5], odpB[5],odpC[5],odpD[5];
string poprawna[5];
string odp; //odpowiedz podana przez uzytkownika
int punkty=0;


int main()
{
    int nr_linii=1;
    string linia;
    int nr_pytania=0;

    fstream test;
    test.open("test.txt",ios::in);

    if(test.good()==false)
    {
        cout<<"Proba otwarcia pliku nie powiodla sie!";
        exit(0);
    }

    while(getline(test,linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia;         break;
            case 2: nick=linia;          break;
            case 3: zapytanie[nr_pytania]=linia;  break;
            case 4: odpA[nr_pytania]=linia;       break;
            case 5: odpB[nr_pytania]=linia;       break;
            case 6: odpC[nr_pytania]=linia;       break;
            case 7: odpD[nr_pytania]=linia;       break;
            case 8: poprawna[nr_pytania]=linia;   break;

        }

        if(nr_linii==8){nr_linii=2; nr_pytania++;}
        nr_linii++;
    }

    test.close();

    for(int i=0; i<=4; i++)
    {
        cout<<endl<<zapytanie[i]<<endl;
        cout<<"A. "<<odpA[i]<<endl;
        cout<<"B. "<<odpB[i]<<endl;
        cout<<"C. "<<odpC[i]<<endl;
        cout<<"D. "<<odpD[i]<<endl;

        cout<<"Podaj odpowiedz: "<<endl;
        cin>>odp;

        transform(odp.begin(),odp.end(),odp.begin(), ::tolower);

        if(odp==poprawna[i])
        {
            cout<<"Dobra odpowiedz! Zdobywasz pkt!"<<endl;
            punkty++;
        }else cout<<"Zle! Brak punktu! Poprawna odp to: "<<poprawna[i]<<endl;
    }
    cout<<endl<<"Koniec testu! Twoja punktacja: "<<punkty;
    return 0;
}

//Gra w zgadniecie tej samej liczby z Johnnym
