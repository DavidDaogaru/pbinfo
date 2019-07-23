#include<fstream>
#include<iostream>

using namespace std;
ifstream f("unice.in");
ofstream g("unice.out");

int n, x;
int fr[101];

int main()
{
    f>>n;
for(int i=1;i<=n;i++){
   f>>x;
    fr[x]++;
}

for(int i=0;i<=99;i++)
    if(fr[i]==1)
        g<<i<<" ";


return 0;
}
