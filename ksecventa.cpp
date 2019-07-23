#include <iostream>

using namespace std;
int n,k,i,v[1001],t,j,nr,ok;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
      cin>>v[i];
   nr=n/k;
   for(i=1;i<=k;i++)  // a cata subsecventa
      for(j=i+1;j<=k;j++)
         {
            ok=1;
            for(t=1;t<=nr;t++) //parcurgem subsecventele i si j
            if(v[(i-1)*nr+t]!=v[(j-1)*nr+t]){
                   ok=0;
                   break;
         }
         if(ok==1)
         {
            cout<<i<<" "<<j;
            return 0;
         }
         }
         cout<<"NU";

    return 0;
}
