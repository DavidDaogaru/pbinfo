#include<fstream>
using namespace std;
ifstream f("paresort.in");
ofstream g("paresort.out");
int v[1001],a[1001],n,k,i,j,p,t;
int main(){
    f>>n; int ok=1;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
		if(v[i]%2==0){
			k++;
			a[k]=v[i];
			ok=0;
		}
		if(ok==1)
            g<<"nu exista";
        else{
            for(i=1;i<=k-1;i++){
                for(j=i+1;j<=k;j++)
                    if(a[j]<=a[i]){
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
            }
            g<<k<<"\n";
            for(i=1;i<=k;i++)
                g<<a[i]<<" ";
        }
	return 0;
}
