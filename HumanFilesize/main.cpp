#include <iostream>
using namespace std;
int main()
{
    long bytes,K=0,M=0,G=0,T=0;
    cin>>bytes;
    if(bytes>1000){K=bytes/=1024;}
    if(K>1000){M=K/=1024;}
    if(M>1000){G=M/=1024;}
    if(G>1000){T=G/=1024;}
    cout<<T<<"TB "<<G<<"GB "<<M<<"MB "<<K<<"KB "<<endl;
    return 0;
}
