#include<iostream>
#include<cmath>
using namespace std;
int a,b,r,i;
int main(){
		cin>>a>>b;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	for(i=1;i<=a/2;i++){
		if(a%i==0)
		cout<<i<<" ";
	}
	cout<<a;
		return 0;
}
