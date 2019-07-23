#include <iostream>
using namespace std;
int a[101][101],i,j,n,m,nr,s;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        s=0;
        for(j=1;j<=m;j++){
            s=s+a[i][j];
        }
        cout<<s<<" ";
    }
    /*
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            fout<<a[i][j];
        }
        fout<<'\n';
    }
    */
    return 0;
}
