#include <iostream>

using namespace std;
int i,j,S1,S2,a[21][21],n;

int modul(int a){
    if(a<0)
        return -a;
    else
        return a;
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++){
        S1=S1+a[i][i];
        S2+=a[i][n+1-i];
    }
    cout<<modul(S1-S2);

    return 0;
}
