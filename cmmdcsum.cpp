#include <iostream>
using namespace std;
int i,j,n,a[101][101],S1,S2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            cin>>a[i][j];
            if(i>j)
                S1+=a[i][j];
            else
                if(j>i)
                S2+=a[i][j];}
    while(S1!=0){
        int r=S2%S1;
        S2=S1;
        S1=r;
        }
    cout<<S2;
    return 0;
}
