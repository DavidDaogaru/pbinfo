#include <iostream>

using namespace std;
int i,n,v[1001];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
            cin>>v[i];
    for(i=2;i<=n;i=i+2)
        cout<<v[i]<<" ";
    cout<<endl;
    if(n%2==0)
        for(i=n-1;i>=1;i=i-2)
            cout<<v[i]<<" ";
    else
        for(i=n;i>=1;i=i-2)
            cout<<v[i]<<" ";
    return 0;
}
