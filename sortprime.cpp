#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int i,j,n,a[1001],v[1001],Max,t,k;

int main(){
    cin>>n;
	for(i=1;i<=n;i++){
		cin>>v[i];
		if(v[i]>Max)
			Max=v[i];
	}

	for(i=1;i<=n;i++) {
        int prim = 1;
        for (j=2;j*j<=v[i];j++)
            if (v[i] % j == 0) {
                prim = 0;
                break;
            }
        if (prim && v[i] >= 2)
            a[++k] = v[i];

	}

	for(i=1;i<=k-1;i++)
		for(j=i+1;j<=k;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}

	for(i=1;i<=k;i++)
		cout<<a[i]<<" ";
return 0;
}
