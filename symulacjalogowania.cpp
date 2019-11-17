#include <iostream>

using namespace std;

string haslo1,haslo2;

int main()
{
    cout<<"Witaj w grze!"<<endl;
    cout<<"Podaj has³o:";
    cin>>haslo1;
    cout<<"Podaj has³o jeszcze raz";
    cin>>haslo2;

    if(haslo1==haslo2)
    {
        cout<<"Logowanie poprawne";
    }
    else
    {
        cout<<"B³¹d logowania";
    }



    return 0;

}
