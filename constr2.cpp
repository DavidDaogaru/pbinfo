#include <iostream>

using namespace std;
int k,t,ok,x[201],y[201],i,j,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(i=n;i>=1;i--)
        {ok=1;t=x[i];
        for(j=2;j*j<=x[i];j++)
            if(x[i]%j==0)
                {ok=0;
                break;}
        if(ok==1)
            y[++k]=t;
        }
    for(i=1;i<=k;i++)
        cout<<y[i]<<" ";
    return 0;
}
