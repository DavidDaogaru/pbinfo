#include<iostream>
using namespace std;
int i,j,Max,MaxPoz,ok,v[1001],aux,n;
int main (){
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		if(v[i]>Max){
			Max=v[i];
			MaxPoz=i;
		}
		do{
			ok=0;
			for(i=1;i<MaxPoz;i++)
					if(v[i]>v[i+1]){
						aux=v[i];
						v[i]=v[i+1];
						v[i+1]=aux;
						ok++;
					}
		}while(ok>0);
		
		do{
			ok=0;
			for(i=MaxPoz;i<n;i++)
					if(v[i]<v[i+1]){
						aux=v[i];
						v[i]=v[i+1];
						v[i+1]=aux;
						ok++;
					}
		}while(ok>0);
		
		for(i=1;i<=n;i++)
			cout<<v[i]<<" ";
	return 0;
}
