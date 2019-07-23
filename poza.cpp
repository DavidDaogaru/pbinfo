#include<iostream>
using namespace std;
int n,m,i,j,Minln,Maxln,Mincol,Maxcol,a[101][101],nr;
int main (){
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];

    Minln = 201;
    Mincol = 201;

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]==1){
                if (i<Minln)
                    Minln = i;
                if (i>Maxln)
                    Maxln = i;
                Mincol = min(Mincol, j);
                Maxcol = max(Maxcol, j);

            }
    cout<<Maxln-Minln+1<<" "<<Maxcol-Mincol+1<<endl;
    for(i=Minln;i<=Maxln;i++) {
        for(j=Mincol;j<=Maxcol;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
