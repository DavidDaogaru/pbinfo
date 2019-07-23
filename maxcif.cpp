#include <fstream>
using namespace std;
ifstream f("maxcif.in");
ofstream g("maxcif.out");
int fr[10],i,Max,x;
int main()
{
    while(f>>x)
        fr[x]++;
    Max=0;
    for(i=0;i<=9;i++){
        if(fr[i]>Max)
            Max=fr[i];
    }
    for(i=0;i<=9;i++)
        if(fr[i]==Max)
            g<<i<<" ";
    return 0;
}
