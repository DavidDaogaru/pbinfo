#include <iostream>
using namespace std;
int i,x,y,n;
long long nr, Nr;
int main()
{
   cin>>n;
   cin>>x;
   nr=1;
   for(i=2;i<=n;i++){
      cin>>y;
   if(x==y)
      nr++;
   else{
      Nr=Nr+nr*(nr+1)/2;
      nr=1;
      }
    x=y;
   }
   Nr=Nr+nr*(nr+1)/2;

    cout << Nr;
    return 0;
}
