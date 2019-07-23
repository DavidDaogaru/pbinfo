#include <fstream>
using namespace std;
int n, s, v[101], i;
ifstream cin("sume.in");
ofstream cout("sume.out");
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++){
        s+=v[i];
    }
    cout<<s<<endl;
    for(i=n;i>=2;i--){
        s-=v[i];
        cout<<s<<endl;
    }
    return 0;
}
