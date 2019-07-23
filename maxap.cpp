#include <iostream>
using namespace std;
int fr[1000001],x,Max,m,n,i,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cin>>x;
            fr[x]++;
            if(fr[x]>Max)
            Max=fr[x];
        }
    for(i=0;i<=1000000;i++)
        if(fr[i]==Max)
            cout<<i<<' ';


    return 0;
}
