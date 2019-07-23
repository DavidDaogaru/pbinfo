#include<iostream>
#include<cmath>
using namespace std;
int i,n;
int main(){
cin>>n;
i=sqrt(n)/1;
  if(i*(i+1)==n)
cout<<i<<' '<<i+1;
  else
    cout<<"NU EXISTA";
  return 0;
}
