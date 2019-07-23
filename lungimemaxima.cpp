#include <fstream>
#include <cstring>
using namespace std;
char s[1001],aux[1001];
int i,Max,n;
ifstream f("lgmax.in");
ofstream g("lgmax.out");
int main()
{
    f>>n;
    Max=0;
    for(i=1;i<=n;i++){
        f.get();
        f.get(s,1001);
    if(strlen(s)>Max){
        Max=strlen(s);
        strcpy(aux,s);
    }
    }
    g<<aux;
    return 0;
}
