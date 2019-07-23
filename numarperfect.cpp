#include <iostream>

using namespace std;
int x, d, s;
int main()
{
    cin>>x; s=x+1;
    for(d=2;d*d<=x;d++){
    if(x%d==0){s=s+d+x/d;}
    }
    if(s==2*x){cout<<x<<" "<<"este perfect";}
    else cout<<x<<" "<<"nu este perfect";
    return 0;
}
