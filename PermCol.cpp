#include <iostream>
using namespace std;
int a[101][101],m,n,i,j,t;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++){
        t=a[i][1];
        for(j=2;j<=m;j++)
        a[i][j-1]=a[i][j];
        a[i][m]=t;}
        for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
        }
return 0;

}
