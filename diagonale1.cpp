#include <iostream>

using namespace std;
int a[101][101],i,j,n,S;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            cin>>a[i][j];
                if(i-j==1||i-j==-1)
                S+=a[i][j];}
                cout<<S;


    return 0;
}
