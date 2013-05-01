#include <iostream>

using namespace std;

int main()
{
    int FiveNumbers, edinici,desetici,stotici,hilqdni,desetohilqdni;
    cout<<"Enter number(5):"; cin>>FiveNumbers;
    desetohilqdni=FiveNumbers/10000;
    hilqdni = (FiveNumbers/1000)%10;
    stotici=(FiveNumbers%1000)/100;
    desetici=(FiveNumbers%100)/10;
    edinici=FiveNumbers%10;
    cout<<desetohilqdni<<endl<<hilqdni<<endl<<stotici<<endl<<desetici<<endl<<edinici<<endl;

    return 0;
}
