#include<iostream>
#include<string>

using namespace std;

//ucielo mi pierwszy element stringa i takie rozwiazanie xD

void Function1()
{
    string x;
    cout<<"Enter a string value for output"<<endl;
    cin>>x;
    cout<<"Content: ";
    cout<<x;
    getline(cin,x);
    cout<<x<<endl;
}


int main()
{
 Function1();
 return 0;

}
