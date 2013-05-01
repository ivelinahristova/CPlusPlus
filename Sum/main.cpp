#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[100][100],m,n,sumNad=0,sumPod=0;
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }
   cout<<"matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<setw(5)<<a[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {
       if(j>i)sumNad+=a[i][j];
       if(i>j)sumPod+=a[i][j];
    }
    cout<<"Sumata nad glavniq diagonal e "<<sumNad<<endl;
     cout<<"Sumata pod glavniq diagonal e "<<sumPod<<endl;
    return 0;
}
