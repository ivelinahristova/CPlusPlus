#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[100][100],m,n,b[100][100],c[100][100];
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cout<<"b["<<i<<"]["<<j<<"]=";
        cin>>b[i][j];
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        c[i][j]=a[i][j] - b[i][j];
    }
    cout<<"New matrix c:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<setw(5)<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
