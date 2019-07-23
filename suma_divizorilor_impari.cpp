#include <iostream>
using namespace std;
int n,i;
long long S;
int main()
{
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0) {
            if (i%2 == 1)
                S+=i;
            if (n/i % 2 == 1)
                S+=n/i;
            if (i == n/i && i%2 == 1) {
                S-=i;
            }
        }
    }

    cout<<S;
    return 0;
}
