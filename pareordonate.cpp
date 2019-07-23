#include<iostream>
using namespace std;
int n,x,y,ok,i;
int main (){
    cin>>n;
    x=-10001; ok=1;
    for(i=1;i<=n;i++){
        cin>>y;
        if(y%2==0){
            if(y<x){
                ok=0;
                break;
            }
            x=y;
        }
    }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
    }
