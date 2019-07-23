#include<iostream>
using namespace std;
int a,n;
int main(){
cin>>n;
if(n%3==0)
cout<<n/3-1<<' '<<n/3<<' '<<n/3+1;
else
cout<<"NU EXISTA";
return 0;
}
