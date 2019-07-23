#include <iostream>
using namespace std;
void citire(int n, int v[]){
    int i;
    for(i=1;i<=n;i++)
        cin>>v[i];
}
void afisare(int n, int v[]){
    int i;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int palindrom(int n){
    int x=n;
    int a=0;
    while(x!=0){
        a=a*10+x%10;
        x=x/10;
    }
    if(a==n)
        return 1;
    else
        return 0;
}
void eliminare(int v[],int n, int k){
    int i=0;
    for(i=k;i<=n;i++)
        v[i]=v[i+1];
}
int main(){
    int n, v[1001], i;
    cin>>n;
    citire(n,v);
    for(i=1;i<=n;i++){
        if(palindrom(v[i])==1){
            eliminare(v, n, i);
            n--;
            i--;
        }
    }
    afisare(n,v);
    return 0;
}
