#include <fstream>
using namespace std;
ifstream cin("cifre11.in");
ofstream cout("cifre11.out");
int frc[10],Maxc,Mins,i,yc,y,Max,n,x;
int consecutiv(int n){
        int fr[10],nr=0,Max=0,i;
        for(i=0;i<=9;i++)
            fr[i]=0;
        if(n==0){

       return 1;
        }
        while(n!=0)
        {
            fr[n%10]=1;
            n=n/10;
            }
        for(i=0;i<=9;i++){
            if(fr[i]!=0)
                nr++;
            else
                nr=0;
            if(nr>Max)
                Max=nr;
        }
        return Max;
        }
int main()
{
    cin>>n;
   Mins=1000;
    for(i=1;i<=n;i++){
            cin>>x;
       int a=x;
        int s=0;


        while(a!=0){
            s=s+a%10;
            a=a/10;
        }
    if(s<Mins){
        Mins=s;
        y=x;
    }
    else
        if(s==Mins&&y<x)
           y=x;
  //pct b
       s=consecutiv(x);
    if(s>Maxc){
        Maxc=s;
        yc=x;
    }
    else
        if(s==Maxc&&yc>x)
          yc=x;
    //pct c
    for(int j=0;j<=9;j++)
    {
        a=x;
        if(a==0){
              frc[0]++;
               break;}
     while(a!=0){
        if(j==a%10){
            frc[j]++;
            break;
        }
        a=a/10;
     }
    }

    }
    cout<<y<<'\n'<<yc<<'\n';
    for(i=0;i<=9;i++)
         if(frc[i]>Max)
            Max=frc[i];
    for(i=0;i<=9;i++)
       if(frc[i]==Max)
         cout<<i<<" ";

    return 0;
}
