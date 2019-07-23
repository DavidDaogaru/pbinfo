#include <fstream>
#include <cstring>
using namespace std;
char s[1001],aux[1001];
int i,j,Max,n,nr;
ifstream f("cuvmax.in");
ofstream g("cuvmax.out");
int main()
{
    f>>n;
    Max=0;
    for(i=1;i<=n;i++){
        f.get();
        f.get(s,1001);
        nr=0;
    for(j=1;s[j]!=0;j++)
        if(s[j]==' '&&s[j-1]!=' ')
            nr++;
        if(nr+1>Max){
            Max=nr+1;
            strcpy(aux,s);
        }


    }
        g<<aux;
    return 0;
}
