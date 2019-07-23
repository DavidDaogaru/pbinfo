#include <iostream>

using namespace std;
int nr_prim(int a, int b){
 int r;
 int ok;
 while(b!=0){
    r=a%b;
 a=b;
 b=r;
 }
 if(a==1)
 ok=0;
 else
    ok=1;
 return ok;
 }

int v[1001],i,n,nr,ok;
int main()
{
    cin>>n;
    nr=0;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++){
        if(nr_prim(v[i],v[n])==0)
        nr++;
}



    cout << nr;
    return 0;
}
