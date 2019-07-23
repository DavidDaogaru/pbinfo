#include <iostream>
#include <cmath>

using namespace std;

int i,j,n,a[1001],t, maxim, pmaxim;

int main() {
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for (i=n;i>=2;i--)
        if (sqrt(a[i])==(int)sqrt(a[i])) {
            maxim = -1;
            for (j=1;j<=i;j++)
                if (( sqrt(a[j])==(int)sqrt(a[j])) && (a[j] > maxim) ) {
                    maxim = a[j];
                    pmaxim = j;

                }
            if (maxim != -1) {
                int aux = a[pmaxim];
                a[pmaxim] = a[i];
                a[i] = aux;
            }
        }


    for(i=1;i<=n;i++)
        cout<<a[i]<<' ';
    return 0;
}
