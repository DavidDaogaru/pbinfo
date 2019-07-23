#include <iostream>
using namespace std;
int n,m,ok,d;
int main(){
    cin>>n>>m;
        d=2;
        ok=1;
        while(n!=1&&ok==1){
            if(m%d==0&&n%d==0){
                    while(m%d==0)
                        m=m/d;
                    while(n%d==0)
                        n=n/d;
            }
            else
            if(n%d==0&&m%d!=0||n%d!=0&&m%d==0)
                   ok=0;
           d++;
        }
           if(m!=1)
             ok=0;

        if(ok==1)
            cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
