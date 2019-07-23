#include <iostream>

using namespace std;
int i,n,v[1001];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
            cin>>v[i];
    for(i=1;i<=n/2;i++)
        cout<<v[i]<<" "<<v[n-i+1]<<" ";
    if(n%2!=0)
        cout<<v[n/2+1];
    return 0;
}
