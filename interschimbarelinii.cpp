#include <fstream>
using namespace std;
int n,m,Max,Min,a[26][26],i,j,Minln,Maxln,t;
int main()
{
    ifstream fin("interschimbarelinii.in");
    ofstream fout("interschimbarelinii.out");
    fin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            fin>>a[i][j];
    Max=-1;
    Min=10001;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]>Max){
                Max=a[i][j];
                Maxln=i;
            }
            if(a[i][j]<Min){
                Min=a[i][j];
                Minln=i;

            }
        }
    }
    for(i=1;i<=m;i++){
        t=a[Maxln][i];
        a[Maxln][i]=a[Minln][i];
        a[Minln][i]=t;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<'\n';
    }
    return 0;
}
