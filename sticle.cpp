#include <iostream>

using namespace std;
int x,y;
int main()
{
    cin>>x>>y;
    if(x>y || x==y)
    {
        cout<<1;
        return 0;
    }
    if(y>x && y%x==0)
        cout<<y/x;
    else
        cout<<y/x+1;

        return 0;
}
