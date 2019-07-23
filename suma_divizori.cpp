#include <iostream>
#include <math.h>

using namespace std;
long long s;
int n,i;
float r;


int main() {
    cin>>n;
    r=sqrt(n);
    if(n>1){
        for(i=1;i<=r;i++){
            if(n%i==0) {
                s=s+i;
                s=s+n/i;
                if (i==n/i)
                    s = s-i;
            }
        }
        cout<<s;
    }
    else{
        cout<<n;
    }
    return 0;
}
