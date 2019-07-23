#include <iostream>
#include <fstream>
using namespace std;
int i,j,n,t,b[1001],a[1001],u;
int main()
{
    ifstream fin("sortcif.in");
    ofstream fout("sortcif.out");
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    for(i=1;i<=n;i++){
        t=a[i];
        while(t!=0){
            b[i]=b[i]+t%10;
            t=t/10;
        }
    }
    for(i=1;i<=n-1;i++){
        for(j=i+1;j<=n;j++){
            if(b[i]>b[j]/* || (  (b[i] == b[j]) && (a[i]>a[j])  )*/){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                u=b[i];
                b[i]=b[j];
                b[j]=u;
            }
        }
    }
    for(i=1;i<=n;i++)
        fout<<a[i]<<' ';
    return 0;
}
