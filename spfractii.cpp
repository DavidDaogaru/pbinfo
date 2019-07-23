#include <iostream>

using namespace std;
struct fractie{
    int a;
    int b;
} x,y,z,t;

int main()
{
    cin>>x.a>>x.b;
    cin>>y.a>>y.b;
    z.a=x.a*y.b+y.a*x.b;
    z.b=x.b*y.b;
    t.a=x.a*y.a;
    t.b=x.b*y.b;
    int m=z.a;
    int n=z.b;
    int r;
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    z.a=z.a/m;
    z.b=z.b/m;
    m=t.a;
    n=t.b;
    r;
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    t.a=t.a/m;
    t.b=t.b/m;
    cout<<z.a<<" "<<z.b<<endl;
    cout<<t.a<<" "<<t.b;
    return 0;
}
