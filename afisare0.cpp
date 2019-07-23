#include <iostream>

using namespace std;
int i,n,v[1001];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        if(v[i]%v[n]==0)
            cout<<v[i]<<" ";
    return 0;
}
