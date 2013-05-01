#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[100][100],m,n,b[100][100];
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }
   cout<<"Old matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<setw(5)<<a[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        b[i][j]=a[j][i];
    }
    cout<<"New matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<setw(5)<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
