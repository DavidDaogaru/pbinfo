#include<iostream>
using namespace std;
int c,p,o,d,g;
 int main (){
	cin>>c>>p;
	g=c*2;
	if(p>g){
		d=p-g;
		o=d/2;
		g=(p-o*4)/2;}
	else
		o=0;
	cout<<g<<" "<<o;
return 0;
}
