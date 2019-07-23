#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("halfsort.in");
ofstream fout("halfsort.out");

int i,j,n,t,a[101];
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    for(i=1;i<=(n/2)-1;i++){
        for(j=i+1;j<=n/2;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=(n/2)+1;i<=n-1;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=1;i<=n;i++)
        fout<<a[i]<<' ';
    return 0;
}
