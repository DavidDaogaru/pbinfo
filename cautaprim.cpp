#include<fstream>
#include<cmath>
#include<bitset>
using namespace std;
ifstream fin("cautaprim.in");
ofstream g("cautaprim.out");
int n,x,i,j,p,nr,v[1000000],Max;
bitset<1000001>f;
int main(){
    fin>>n;
    for(i=1;i<=n;i++){
        fin>>v[i];
    }

    for(i=2;i<=100;i++)
        if(f[i]==0)
            for(j=i+i;j<=100;j+=i)
                f[j]=1;

    for (i=1;i<=n;i++)
        if (v[i] <100)
            f[ v[i] ] = 1;

    f[1]=1;
    f[0]=1;

    for (i=99;i>=10;i--)
        if (f[i] == 0)
            break;

    g<<i;

	return 0;
}
