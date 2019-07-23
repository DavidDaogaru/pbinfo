#include<iostream>
#include<cmath>
using namespace std;
int i, nr, n, a,b, j,k,l,MIN,MAX,Max,w;
int main(){


	cin>>a>>b;

	for(j=a;j<=b;j++){

		if(j%2==0) {
		    nr = 0;
            for(i=2;i*i<=j;i++){
                if(j%i==0){
                    if(i%2==0)
                        nr++;
                    if((j/i)%2==0 && i!=j/i)
                        nr++;
                }
            }
            nr++;

            if(Max<nr){
                Max = nr;
                MIN = j;
                MAX = j;
            } else
                if (Max == nr)
                    MAX = j;




		}
	}


	cout<<Max<<" "<<MIN<<" "<<MAX;
	return 0;
}
