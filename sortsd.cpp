#include<iostream>
using namespace std;
int a[1001],v[1001],i,j,t,p,s,n;
int main(){
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++){
        s = 0;
		for(j=1;j*j<=v[i];j++){
			if(v[i]%j==0) {
				s=s+j+v[i]/j;
				if(j==v[i]/j)
					s=s-j;
			}
		}
		a[i]=s;
	}
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++)
			if(a[j]<a[i] || (  a[j] == a[i] && v[i]>v[j]  )){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				p=v[i];
				v[i]=v[j];
				v[j]=p;
			}
	}
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
	return 0;
}
