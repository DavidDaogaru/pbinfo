#include <iostream>
using namespace std;
int a[101][101],n,m,i,j,nr=0,ok,k;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for (j=1;j<=m;j++){
        ok=1;
        for(i=1;i<=n;i++)
            for(k=i+1;k<=n;k++)
                if(a[i][j]==a[k][j]){
                    ok=0;
                    break;}
            if(ok==1)
            nr++;}
    cout<<nr;
    return 0;
}
