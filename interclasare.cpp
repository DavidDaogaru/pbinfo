#include <iostream>
#include <fstream>
using namespace std;
int i,j,n,m,a[100001],b[100001],k,c[200001],nr;
int main (){
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    fin>>m;
    for(i=1;i<=m;i++)
        fin>>b[i];


    i = 1;
    j = 1;
    k = 0;
    while (i<=n && j<=m) {
        if (a[i] < b[j]) {
            k++;
            c[k] = a[i];
            i++;
        } else
            c[++k] = b[j++];
    }

    for (;i<=n;i++)
        c[++k] = a[i];

    for (;j<=m;j++)
        c[++k] = b[j];

    // algoritmul de interclasare optima a 2 siruri sortate deja
    // (sa obtinem rezultatul sortat) se face liniar
    for(i=1;i<=n+m;i++){
        fout<<c[i]<<' ';
        nr++;
        if(nr%10==0)
            fout<<"\n";
    }

return 0;
}
