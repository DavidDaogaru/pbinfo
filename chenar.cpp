#include <fstream>
using namespace std;
ifstream fin("chenar.in");
ofstream fout("chenar.out");
int n,i,j,a[24][24];
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            fin>>a[i][j];
    for(i=1;i<=n;i++)
        fout<<a[1][i]<<" ";
    for(i=2;i<=n;i++)
        fout<<a[i][n]<<" ";
    for(i=n-1;i>=1;i--)
        fout<<a[n][i]<<" ";
    for(i=n-1;i>=2;i--)
        fout<<a[i][1]<<" ";

    return 0;
}
