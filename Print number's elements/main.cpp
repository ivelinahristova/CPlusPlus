#include <iostream>

using namespace std;

int main()
{
    int Number;
    cout<<"Enter number:"; cin>>Number;
    while(Number!=0)
    {

        cout<<Number%10<<endl;
        Number/=10;
    }
    return 0;
}
