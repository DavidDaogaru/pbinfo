#include <fstream>
#include <iostream>
using namespace std;
ifstream f("secvk.in");
ofstream g("secvk.out");
int n,x[100001],k,s,Max,stMax,st,i;
int main()
{
    f>>n>>k;
    s=0;
for(i=1;i<=k;i++){
	f>>x[i];
	s=s+x[i];
}
    Max=s;
    stMax=1;
    st=1;
for(i=k+1;i<=n;i++){
	f>>x[i];
    s=s-x[st]+x[i];
    st++;
if(s>Max){
	Max=s;
	stMax=st;
} }
    for(i=stMax; i<=stMax+k-1; i++)
        g<<x[i]<<" ";
    return 0;
}
