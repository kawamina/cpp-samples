#include <iostream>
#include <cstdlib>

using namespace std;

int liczba;
int liczba2;


int main()
{
    cout<<"Zagrajmy w gre. Pomysl dowolna liczbe od 1 d 10 i ja wpisz: "<<endl;
    do
    {
        cin>>liczba;
        cout<<"Teraz Johnny poda jego liczbe od 1 do 10"<<endl;
        liczba2=rand()%10+1;
        cout<<liczba2<<endl;

        if (liczba!=liczba2) cout<<"Podaj liczbe jeszcze raz"<<endl;


    }while(liczba!=liczba2);

    if(liczba==liczba2)cout<<"Ty i Johnny zgadliscie ta sama liczbe!";

    return 0;
}

//Gra w zgadniecie tej samej liczby z Johnnym
