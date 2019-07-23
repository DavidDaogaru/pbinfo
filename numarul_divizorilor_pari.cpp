#include<iostream>
#include<cmath>
using namespace std;
int i, r, nr, n;
int main(){
	
	cin>>n;
	if(n%2!=0)
		cout<<"Nu are divizori pari";
	else
		for(i=2;i*i<=n;i++)
			if(n%i==0){
			if(i%2==0)
				nr++;
			if((n/i)%2==0 && i!=n/i)
				nr++;
			}
			nr++;
	cout<<nr;
	
	
	return 0;
}
