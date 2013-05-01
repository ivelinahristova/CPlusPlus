#include <iostream>

using namespace std;

int main()
{
    int i, a[10], min;
    for(i=0;i<10;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<10;i++)
    if(a[i]<min)min=a[i];
    cout<<"min="<<min<<endl;
    return 0;
}
