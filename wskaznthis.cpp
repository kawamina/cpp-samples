#include <iostream>
#include <string>

using namespace std;

class Liczby{

    int x;
    int y;
public:
    void pokaz()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    Liczby(int x, int y)
    {
        this->x=x;
        this->y=y;
    }


};
int main()
{
    Liczby l1(10, 20);
    l1.pokaz();
    return 0;

}
