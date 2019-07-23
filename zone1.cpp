#include <iostream>

using namespace std;
int i,j,v[5],t,a[101][101],n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<j&&i+j<n+1)
                v[1]+=a[i][j];
            if(i>j&&i+j<n+1)
                v[2]+=a[i][j];
            if(i>j&&i+j>n+1)
                v[3]+=a[i][j];
            if(i<j&&i+j>n+1)
                v[4]+=a[i][j];
        }
    }

    for (i=1;i<=3;i++)
        for (j=i+1;j<=4;j++)
            if (v[i] > v[j]) {
                t=v[i];
                v[i]=v[j];
                v[j]=t;

            }
    for(i=1;i<=4;i++)
        cout<<v[i]<<" ";
    return 0;
}
