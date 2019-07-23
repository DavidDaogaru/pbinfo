#include<fstream>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");
using namespace std;
int x,i,j,fr[10],nr;
int main(){
	while(fin>>x)
		if(x==0)
			fr[0]++;
		else
			while(x!=0){
				fr[x%10]++;
				x=x/10;
			}
	for(i=9;i>=0;i--)
		for(j=1;j<=fr[i];j++){
			fout<<i<<" ";
			nr++;
			if(nr%20==0)
				fout<<"\n";
		}
	return 0;
}
