#include<iostream>
using namespace std;
int x,p=1,n,i,d,nr;
int main () {
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;p=1;
        for(d=2;d*d<=x;d++)
            if(x%d==0){
                nr=0;
                while(x%d==0){
                    nr++;
                    x=x/d;
                }
                p=p*(2*nr+1);
                }
            if(x!=1)
                p=p*3;
        cout<<p<<" ";
    }
return 0;
}
