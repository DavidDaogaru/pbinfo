#include <iostream>

using namespace std;
int nr1,nr2,x,i,n;
long long p;

int main()
{
    cin>>n;nr1=0;nr2=0;p=1;
    for(i=1;i<=n;i++){
        cin>>x;

    while(x%2==0){
        x=x/2;
        nr1++;
    }
   while(x%5==0){
        x=x/5;
        nr2++;
    }
   p=p*x%10;
    }

    if(nr1>nr2)
         for(i=1;i<=nr1-nr2;i++)
              p=p*2%10;
    else
           for(i=1;i<=nr2-nr1;i++)
              p=p*5%10;
 cout<<p;
    return 0;
}
