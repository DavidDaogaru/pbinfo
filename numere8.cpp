#include <fstream>
using namespace std;
ifstream f("numere8.in");
ofstream g("numere8.out");
int i,fr[10001],x;
int main()
{
    while(f>>x)
        if(x<10000)
           fr[x]++;
    for(i=9999;i>=1;i--){
        if(fr[i]==0)
            g<<i<<" ";
    }
    return 0;
}
