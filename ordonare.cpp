#include<iostream>
using namespace std;
int v[1001],i,n,aux,p,Max,j;
int main (){
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=n;i>=2;i--){
		Max=v[1];
		p=1;
		for(j=2;j<=i;j++)
			if(v[j]>Max){
				Max=v[j];
				p=j;
			}
			aux=v[i];
			v[i]=v[p];
			v[p]=aux;
	}

	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";
	return 0;
}
