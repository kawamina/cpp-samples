#include <iostream>

//tamagochi

using namespace std;

string A, B, C;
string letter;


int main()
{
   cout<<"Say hi to your cat. What you gonna do?"<<endl<<endl;
   cout<<"Choose one activity"<<endl;
   cout<<"A.Feed"<<endl<<"B.Play"<<endl<<"C.Sleep"<<endl;
   cin>>letter;
   cout<<endl<<"Loading:"<<endl;

   if(letter=="A")
   {
       cout<<"Your cat is no hungry anymore, meow! :)"<<endl;
   }
   if(letter=="B")
   {
       cout<<"Let's have some fun, meow"<<endl;
   }
   if(letter=="C")
   {
       cout<<"Your cat is going to sleep"<<endl;
   }



    return 0;

}
/* for(int i=1; i<=10; i++)
    {
        cout<<i<<endl;
    }
*/
