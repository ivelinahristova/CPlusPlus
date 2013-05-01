#include <iostream>
using namespace std;
int main()
{
    double numberOne,numberTwo;
    char symbol;
    bool k=0;
    cout<<"Enter number one:";
    cin>>numberOne;
    cout<<"Enter number two:";
    cin>>numberTwo;
    while(true)
    {

        cout<<"Select operation (+,-,*,/) or 'q' for exit:";
        cin>>symbol;
        switch(symbol)
        {
            case '+': cout<<numberOne+numberTwo<<endl; break;
            case '-': cout<<numberOne-numberTwo<<endl; break;
            case '*': cout<<numberOne*numberTwo<<endl; break;
            case '/': cout<<numberOne/numberTwo<<endl; break;
            case 'q': k=1; break;
            default:cout<<"Error: incorrect operation!"<<endl; break;
        }
        if(k)break;
    }
    return 0;
}
