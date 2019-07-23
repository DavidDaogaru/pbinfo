#include <iostream>
using namespace std;
int n,a[201],i,Ma,nr;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i];
    Ma=0;
    for(i=1;i<=n;i++)
        Ma=Ma+a[i];
    Ma=Ma/n;
    for(i=1;i<=n;i++)
        if(a[i]>Ma)
            nr++;
    cout<<nr;
    return 0;

}
