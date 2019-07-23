#include <fstream>
using namespace std;
ifstream f("secvpal.in");
ofstream g("secvpal.out");
int st,dr,stM,drM,i,n,a[1001],Max;
int main(){
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    for(i=1;i<=n;i++){//lungime impara
        st=i-1;
        dr=i+1;
        while(st>=1&&dr<=n&&a[st]==a[dr]){
            st--;
            dr++;
        }
        st++;
        dr--;
        if(dr-st+1>Max){
            Max=dr-st+1;
            stM=st;
            drM=dr;
        }
        //lungime para
        st=i-1;
        dr=i;
     while(st>=1&&dr<=n&&a[st]==a[dr]){
            st--;
            dr++;
        }
        st++;
        dr--;
        if(dr-st+1>Max){
            Max=dr-st+1;
            stM=st;
            drM=dr;
        }
    }
    g<<stM<<" "<<drM;
    return 0;
}
