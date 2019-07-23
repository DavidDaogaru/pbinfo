#include <iostream>
#include <fstream>
using namespace std;
int a[121][121];
int i,j,n,imin,imax,z,s,m,t,jmin,jmax,ok, nr,x,iv,jv;
int di[4] = {0, 0,1,-1};
int dj[4] = {1,-1,0, 0};
ifstream fin("date.in");

void afisare() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int main(){
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cin>>a[i][j];
            a[i][j]++;
        }

  //  afisare();
    do {
        ok = 0;

        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++){

                if (a[i][j] == 2) {
                    x = 0;
                    for (t = 0; t<=3; t++) {
                        iv = i + di[t];
                        jv = j + dj[t];

                        if (a[iv][jv] == 1)
                            x++;

                    }
                    if (x >= 2) {
                        a[i][j] = -2;
                        ok = 1;
                    }
                }



            }


//        afisare();

        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++){
                if (a[i][j] < 0)
                    a[i][j] = 1;
            }

        //afisare();
        nr++;
    } while (ok == 1);
    x = 0;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            if (a[i][j] == 1)
                x++;
    if (x == n*m)
        cout<<nr-1;
    else
        cout<<-1;

    return 0;
}
