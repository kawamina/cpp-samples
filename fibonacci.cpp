#include <iostream>
#include <string>

using namespace std;

int fib[10];

int main()
{
    fib[1]=1;
    fib[2]=1;
    for(int i=3;i<10;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=1; i<11; i++)
    {
        cout<<fib[i]<<endl;
    }

}
