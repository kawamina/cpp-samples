#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> a)
{
    cout<<"Start: ";
    for(int i=0; i<a.size(); i++)
    {
        cout<< a[i] << "//";
    }
}

int main()
{
    vector<int> v(3);

    v[0]=3;
    v[1]=45;
    v[2]=16;

    v.push_back(34);

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(1)<<endl;

    cout<<"And then: "<<endl;
    printVector(v);


    return 0;


}
