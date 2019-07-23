#include<fstream>
using namespace std;
ifstream fin("halfsort2.in");
ofstream fout("halfsort2.out");
int i,aux,ok,v[1001],n;
int main (){
	fin>>n;
	for(i=1;i<=n;i++)
		fin>>v[i];
	do{
		ok=0;
		for(i=2;i<n;i=i+2)
			if(v[i]>v[i+2]){
				aux=v[i];
				v[i]=v[i+2];
				v[i+2]=aux;
				ok++;
			}
	}while(ok>0);
	
	do{
		ok=0;
		for(i=1;i<n;i=i+2)
			if(v[i]<v[i+2]){
				aux=v[i];
				v[i]=v[i+2];
				v[i+2]=aux;
				ok++;
			}
	}while(ok>0);
	for(i=1;i<=n;i++)
		fout<<v[i]<<" ";
	return 0;
}
