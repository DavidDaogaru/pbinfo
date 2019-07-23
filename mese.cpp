#include <iostream>

using namespace std;

int a[260][260], n, m, i, j, x, y, i1, j1, mese, amax, ac;

int main() {
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            cin>>a[i][j];

    for(i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            if (a[i][j] == 1) {
                // identific toata masa cu acest 1 st sus
                i1 = i;
                while (a[i1][j] == 1)
                    i1++;
                i1--;

                j1 = j;
                while (a[i][j1] == 1)
                    j1++;
                j1--;
                // masa este (i,j) (i1,j1)
                ac = 0;
                for (x = i;x<=i1;x++)
                    for (y=j;y<=j1;y++) {
                        a[x][y] = 2;
                        ac ++;
                    }

                mese++;
                if (amax < ac)
                    amax = (ac);
            }

    cout<<mese<<" "<<amax;
    return 0;
}
