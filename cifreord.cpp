#include <iostream>
#include <fstream>
using namespace std;
int fr[10],x,n,i,j,nr;
int main (){
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");
    fin>>n;
    for(i=1;i<=n;i++) {
        fin>>x;
        fr[x]++;
    }


    for(i=0;i<=9;i++){
        for(j=1;j<=fr[i];j++){
            fout<<i<<' ';
            nr++;
            if (nr%20 == 0)
                fout<<"\n";
        }
    }

return 0;
}
