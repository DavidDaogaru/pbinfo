#include <fstream>
#define DIM 102
using namespace std;

int di[] = { 0,0,-1,1,1, 1,-1,-1};
int dj[] = {-1,1, 0,0,1,-1, 1,-1};

ifstream fin("regine.in");
ofstream fout("regine.out");

int a[DIM][DIM];
int maxim, nrmaxim, i, j, iv, jv, n, m, x, y, nr, d;

int main() {
    fin>>n>>m;
    for (i=1;i<=m;i++) {
        fin>>x>>y;
        a[x][y] = 1;
    }

    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            if (a[i][j] == 1) {
                nr = 0;
                for (d = 0; d<=7; d++) {
                    iv = i+di[d];
                    jv = j+dj[d];
                    while (iv > 0 && iv<=n && jv >0 && jv<=n && a[iv][jv] == 0) {
                        iv += di[d];
                        jv += dj[d];
                    }
                    if (a[iv][jv] == 1)
                        nr++;
                }
                if (nr > maxim) {
                    maxim = nr;
                    nrmaxim = 1;
                } else
                    if (nr == maxim)
                        nrmaxim++;
            }

    fout<<maxim<<" "<<nrmaxim;

    return 0;
}
