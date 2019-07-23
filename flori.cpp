#include <iostream>
using namespace std;
int n,i,j,s,rand;
int main()
{
    cin>>n;
    if(n%5==0)
        cout<<n/5<<"\n"<<"DA"<<"\n";
    else
        cout<<n/5+1<<"\n"<<"NU"<<"\n";
    for(i=1;rand==0;i++){
        for(j=1;j<=i;j++){
        s=s+5;
            if(s>=n){
            rand=i;
            break;
            }
        }
    }
    if(rand%2==0)
        cout<<"panselute";
    else
        cout<<"micsunele";
    return 0;
}
