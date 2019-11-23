#include <iostream>
using namespace std;

void smaki()
{
    cout<< "[1] - czekoladowym"<<endl;
    cout<< "[2] - truskawkowym"<<endl;
    cout<< "[3] - waniliowym"<<endl;
    cout<<endl;
    cout<<"Wybierz smak: (podaj numer)";
}

void czekolada()
{
    cout << "***Mozna dobrac dodatkowo posypke***" <<endl<<endl;
}
void truskawka()
{
    cout << "***Mozna dobrac dodatkowo posypke***" <<endl<<endl;
}
void wanilia()
{
    cout << "***Mozna dobrac dodatkowo posypke***" <<endl<<endl;
}
void posypka()
{
     cout<< "[1] - granola"<<endl;
    cout<< "[2] - orzechy"<<endl;
}
int main()
{
    cout<<"Witaj w naszej lodziarni!"<<endl<<endl;
    cout<< "Sklep ma w ofercie lody o smaku:"<<endl;
    smaki();
    int liczba;
    int liczba2;
    do
    {
        cin >> liczba;
        switch( liczba )
        {
        case 1:
            cout<<"Wybrales czekoladowe"<<endl;
            czekolada();
            posypka();
            cout<<endl;
            cin>>liczba2;
            if(liczba2==1)cout<<"Wybrales lody czekoladowe z posypka granola";
            if(liczba2==2)cout<<"Wybrales lody czekoladowe z posypka orzechowa";
            else break;
            break;
        case 2:
            cout<<"Wybrales truskawkowe"<<endl;
            truskawka();
            posypka();
            cout<<endl;
            cin>>liczba2;
            if(liczba2==1)cout<<"Wybrales lody truskawkowe z posypka granola";
            if(liczba2==2)cout<<"Wybrales lody truskawkowe z posypka orzechowa";
            else break;
            break;
        case 3:
            cout<<"Wybrales waniliowe"<<endl;
            wanilia();
            posypka();
            cout<<endl;
            cin>>liczba2;
            if(liczba2==1)cout<<"Wybrales lody waniliowe z posypka granola";
            if(liczba2==2)cout<<"Wybrales lody waniliowe z posypka orzechowa";
            else break;
            break;
            default:
            break;
        }
    } while( liczba != 0 );

    return 0;
}
