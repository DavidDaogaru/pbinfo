#include <iostream>

using namespace std;
int v[1001],n,i,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        if(v[i]%2==0)
        {
            for(j=i+1;j<=n;j++)
                v[j-1]=v[j];
            n--;
            i--;
        }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
