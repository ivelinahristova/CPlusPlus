#include <iostream>

using namespace std;

int main()
{
    int level;
    bool k=0;
    cout<<"Newbie (0-2)\nBeginner (2-4)\nIntermediate(4-6)\nAdvanced (6-8)\nFreak (8-10)\nEnter level:";
    cin>>level;
    if(level>0 && level<=2){cout<<"Your choise is: Newbie\n"; k=1;}
    if(level>2 && level<=4){cout<<"Your choise is: Beginner\n"; k=1;}
    if(level>4 && level<=6){cout<<"Your choise is: Intermediate\n"; k=1;}
    if(level>6 && level<=8){cout<<"Your choise is: Advanced\n"; k=1;}
    if(level>8 && level<=10){cout<<"Your choise is: Freak\n"; k=1;}
    if(k==0)cout<<"Invalid choise!"<<endl;
    return 0;
}
