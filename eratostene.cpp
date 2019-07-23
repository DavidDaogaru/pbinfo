#include<fstream>
#include<cmath>
#include<bitset>
using namespace std;
ifstream fin("eratostene.in");
ofstream g("eratostene.out");
int n,x,i,j,p,nr,v[1000001],Max;
bitset<1000001>f;
int main(){
    fin>>n;
    for(i=1;i<=n;i++){
        fin>>v[i];
        if(Max<v[i])
            Max=v[i];
    }

    for(i=2;i<=Max;i++)
        if(f[i]==0)
            for(j=i+i;j<=Max;j+=i)
                f[j]=1;

    f[1]=1;
    f[0]=1;

    for(i=1;i<=n;i++)
        if(f[v[i]]==0)
            nr++;
    g<<nr;
	return 0;
}
