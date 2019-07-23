#include <iostream>

using namespace std;
int fr[10001],m,n,i,j,x,s;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++){
        cin>>x;
        fr[x]++;
        if(x%2==0&&fr[x]==1)
        s+=x;}
        cout<<s;
        return 0;
}
