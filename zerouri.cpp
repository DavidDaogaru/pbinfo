#include <iostream>

using namespace std;
int nr1,nr2,x,i,n;
int main()
{
    cin>>n;nr1=0;nr2=0;
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


    }
    if(nr1<nr2)
        cout<<nr1;
    else
        if(nr1>=nr2)
            cout<<nr2;
    return 0;
}
