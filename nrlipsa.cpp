#include <iostream>
#include <fstream>
using namespace std;
ifstream f("nrlipsa.in");
ofstream g("nrlipsa.out");
int fr[1000],i,x,j,nr,a,b;
int main()
{
    while(f>>x){
            if(x<1000&&x>99)
                fr[x]++;
    a=b=-1;nr=0;
    for(i=999;i>=100&&nr<2;i--)
        if(fr[i]==0){
                a=b;
                b=i;
                nr++;}}
if(nr!=2)
{
    g<<"NU";
}
else{
    g<<a<<" "<<b;
}
    return 0;
}
