#include <iostream>

using namespace std;
int x, d, s;
int main()
{
    cin>>x; s=x+1;
    for(d=2;d*d<=x;d++){
    if(x%d==0){s=s+d+x/d;}
    }
    if(s%x==0){cout<<"DA";}
    else cout<<"NU";
    return 0;
}
