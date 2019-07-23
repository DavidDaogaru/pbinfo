#include <iostream>
using namespace std;
int n,i,Max,z,a[1001],dr;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    Max=0;
    for(i=1;i<=n;i++){
        if(a[i]!=0)
            z=0;
        else
            z++;

        if(z>Max){
            Max=z;
            dr=i;
        }
    }
    cout<<dr-Max+1<<' '<<dr;
    return 0;
}
