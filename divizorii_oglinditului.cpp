#include <iostream>
using namespace std;
int n,a,i,nr;
int main()
{
    cin>>n;
    while(n>0){
        a = a*10 + n%10;
        n=n/10;
    }

    for(i=1;i<=a/2;i++)
            if(a%i==0)
                nr++;
    nr++;
    cout<<nr;
    return 0;
}
