#include <iostream>
using namespace std;
unsigned long long x, y, z;
int n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        cin>>y;
        if (x == 0) {
            cout<<"0\n";
            continue;
        }
        z=(unsigned long long)x*y;
        if(z/x==y)
            cout<<x*y<<"\n";
        else
            cout<<"Overflow!\n";
    }
    return 0;
}
