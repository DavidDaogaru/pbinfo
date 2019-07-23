#include <iostream>
using namespace std;
int n,x,y,z;
int main(){
    cin>>n;
    while(n!=0){
        x=y=z=1;
        while(z<=n){
            z=x+y;
            x=y;
            y=z;
        }
        cout<<x<<" ";
        n=n-x;
    }
    return 0;
}
