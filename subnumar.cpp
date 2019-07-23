#include <iostream>
#include <fstream>
using namespace std;
ifstream f("subnumar.in");
ofstream g("subnumar.out");
int fr[90], n, x, Max;
int main()
{
    while(f>>x){
            while(x>9){
        fr[x%100-10]++;
        x/=10;
    }}
    for(int i=0;i<=89;i++)
        if(Max<fr[i])
            Max=fr[i];
    for(int i=89;i>=0;i--)
        if(Max==fr[i])
            g<<i+10<<" ";
    return 0;
}
