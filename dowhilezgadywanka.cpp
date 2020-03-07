#include <iostream>

using namespace std;

string odp;

int main()
{
    cout<<"Podaj poprawne zakonczenie tekstu: \n"<<endl;

    cout<<"Gimmie gimmie gimmie a man after: "<<endl;
    cout<<"A) 3 AM"<<endl;
    cout<<"B) 5 PM"<<endl;
    cout<<"C) 7 AM"<<endl;
    cout<<"D) midnight"<<endl;

    do{
    cin>>odp;
    if(odp=="D")
    {
       cout<<"Poprawna odpowiedz!";
    }
    else
    {
      cout<<"Zla odp! Sprobuj jeszcze raz: "<<endl;
    }
    }while(odp!="D");

    return 0;

}

