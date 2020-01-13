#include <iostream>

using namespace std;

int counter=0;

int main()
{
    for(int i=0;i<10;i++)
    {
        string imie;

        cout<<i+1<<". Podaj "<<i+1<<". imie: ";
        cin>>imie;

        int dlugosc = imie.length();
        if(imie[dlugosc-1]=='a')
        {
            counter++;
        }
    }

    cout<<"Liczba potencjalnych kobiet: "<<counter<<endl;
    return 0;
}
