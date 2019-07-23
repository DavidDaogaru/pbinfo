#include<iostream>
using namespace std;
int n,s,x,i,nr,Max,Min;
int main(){
	cin>>s>>n;
	Min=1001;
	nr=0;
	Max=0;
	for(i=1;i<=n;i++){
		cin>>x;
		if(x<Min){
			Min=x;
			nr=i;
		}
	}
	Max=s/Min;
	cout<<Max<<" "<<nr;
return 0;
}
