#include <iostream>
#include <conio.h>

//zbieranie danych BMI dla mlodych, niepracujacych fiz kobiet
//???Poprawic #notFinishedYet

using namespace std;

void Function1()
{
    for(int i=0;i<5;i++)
    {cout<<i+1<<". day: ";
    if(int tab[i]>2200)
    {
        cout<<"Too much";
        cout<<endl;
    }
    else if(int tab[i]<1800)
    {
        cout<<"Not enough";
        cout<<endl;
    }
    else{
        cout<<"Ok";
        cout<<endl;
    }
    getch();
    }

}


int tab[5];
int x;

int main()
{
   for(int i=0; i<5; i++)
   {
       cout<<"How much was daily calorie intake on "<<i+1<<". day?: ";
       cin>>x;
   }

    cout<<"Zapisane w spisie: "<<endl;
    for(int i=0;i<5;i++)
    Function1();
    getch();

    return 0;

}
