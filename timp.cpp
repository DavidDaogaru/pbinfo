#include <iostream>
#include <math.h>

using namespace std;
int h1,m1,x,m2,h2,p,r;

int main()
{
    cin>>h1;
    cin>>m1;
    cin>>x;
    p=(m1+x)/60;
    r=(m1+x)%60;
    h2=(h1+p)%24;
    m2=r;
    cout<<h2<<" "<<m2;
    return 0;
}
