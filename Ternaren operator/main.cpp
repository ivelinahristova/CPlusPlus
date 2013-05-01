#include <iostream>

using namespace std;

int main()
{
    int grade;
    bool operatorTern;
    operatorTern=2==grade?cout<<"0-55%":3==grade?cout<<"56-65%":4==grade?cout<<"66-75%":5==grade?cout<<"76-85%":6==grade?cout<<"86-100%":cout<<"Invalid grade!";

    cout<<endl;
    return 0;
}
