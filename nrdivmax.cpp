#include<iostream>
#include<cmath>
using namespace std;
int a,b,i,j,v[1001],Max,nr,n,nrmax;

int main(){
    cin>>n;
    for(i=1;i<=n;i++){
        nr = 0;
        for(j=1;j*j<=i;j++){
            if(i%j==0) {
                nr+=2;
                if (j == i/j)
                    nr--;
            }
        }
        if (Max < nr) {
            Max = nr;
            nrmax = i;
        }
    }
    cout<<nrmax;
	return 0;
}
