#include <iostream>

//symulacja namna¿ania siê bakterii, zak³adaj¹c, ¿e dziel¹ siê ¿e z 1 bakterii po podziale powstaj¹ cztery bakterie
using namespace std;

//czas w godzinach
int czas=0;
int populacja=1;
int czas2;

int main()
{
   cout<<"Ile minelo godzin?";
    cin>>czas2;

    while(czas<=czas2)
    {
        czas++;
        populacja = populacja*4;

        cout<<"po: "<<czas<<"godz";
        cout<<"Populacja wynosi: "<<populacja<<endl;

    }


        return 0;




    return 0;

}
/* for(int i=1; i<=10; i++)
    {
        cout<<i<<endl;
    }
*/
