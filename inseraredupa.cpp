#include <iostream>

using namespace std;
int v[53],n,j,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        if(v[i]%2==0)
        {
            n++;
            for(j=n;j>=i+2;j--)
                v[j]=v[j-1];
            v[i+1]=2*v[i];
            i++;
        }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
