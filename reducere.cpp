#include <iostream>
using namespace std;
int T,n,a[1001],b[1001],i,j,s,ok,m;
int main()
{
    cin>>T;
    while(T>0){
            T--;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];
        cin>>m;
        for(i=1;i<=m;i++)
            cin>>b[i];
        j=1; ok=1; s=0;
        for(i=1;i<=n&&ok==1&&j<=n;i++)
            if(s+a[i]<b[j])
            s+=a[i];
        else
            if(s+a[i]==b[j]){
                j++;
                s=0;}
                else
                    ok=0;
        if(i<=n||j<=m)
            ok=0;
        if(ok==1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
}
    return 0;
}
