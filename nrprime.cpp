#include<iostream>
#include<cmath>
using namespace std;
int a[101][101], n, m, i,j ,k, ok, nr;
int main(){
cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(i=2;i<=n;i=i+2)
        for(j=1;j<=m;j++){
            ok=1;
        for(k=2;k*k<=a[i][j];k++)
            if(a[i][j]%k==0)
                ok=0;
        if(ok==1&&a[i][j]>1)
            nr++;}
    cout<<nr;
return 0;
}
