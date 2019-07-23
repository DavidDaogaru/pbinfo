#include <iostream>

using namespace std;
int a[101][101],m,n,i,j,s,Max;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++){
        Max=a[i][1];
        s=a[i][1];
        for(j=2;j<=m;j++){
            s+=a[i][j];
            if(Max<a[i][j])
                Max=a[i][j];
        }
    cout<<s-Max<<" ";}
    return 0;
}
