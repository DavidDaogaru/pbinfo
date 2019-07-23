#include<iostream>

using namespace std;
int n,a,b,i,xa,xb,Min;
int main(){
cin>>n;Min=n;
for(a=1;a*a<=n;a++)
    if(n%a==0)
{
    b=n/a;
    if(b-a<Min){
        Min=b-a;
        xb=b;xa=a;
    }

}
cout<<xa<<" "<<xb;
return 0;
}
