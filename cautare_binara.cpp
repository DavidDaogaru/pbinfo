#include<iostream>
using namespace std;
int v[25001],n,m,x;
int cautarebinara(int n,int v[],int x){
  int st,dr;
  st=1;dr=n;
  while(st<=dr){
    int mij=(st+dr)/2;
        if(x==v[mij])
            return 1;
        else
            if(x<v[mij])
                dr=mij-1;
        else
            st=mij+1;
  }
  return 0;

}
int main(){
    cin>>n;
      for(int i=1;i<=n;i++)
          cin>>v[i];
    cin>>m;
    for(int i=1;i<=m;i++)  {
        cin>>x;
        cout<<cautarebinara(n,v,x)<<" ";
    }

    return 0;
    }
