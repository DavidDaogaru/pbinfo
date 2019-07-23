#include <fstream>
using namespace std;
int a[100001],b[100001],k,i,j,n,m;
ifstream f("interclasare1.in");
ofstream cout("interclasare1.out");
int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f>>m;
    for(j=1;j<=m;j++)
        f>>b[j];
    k=0;
    i=1;j=1;k=0;
    while(i<=n&&j<=m){
            k++;
        if(a[i]<b[j]){
           cout<<a[i]<<" ";
           i++;
           }
           else
           if(a[i]>b[j]){
                cout<<b[j]<<" ";
                j++;

           }
           else{
            cout<<a[i]<<" ";
                i++;j++;

           }
        if(k%10==0)
            cout<<endl;
    }

    while(i<=n){
        cout<<a[i]<<" ";
        i++;
        k++;
        if(k%10==0)
            cout<<endl;
    }

    while(j<=m){
        cout<<b[j]<<" ";
        j++;
        k++;
        if(k%10==0)
            cout<<endl;
    }

    return 0;
}
