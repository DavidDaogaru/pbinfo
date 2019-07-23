#include <iostream>

using namespace std;
int a,b,c,d,Max3,Max2,Max1,S;
int main()
{

    cin>>a>>b>>c;
    if(a>b&&a>c){
        Max3=a;
        if(b>c)
        {
            Max2=b;
            Max1=c;
        }
        else
        {
            Max2=c;
            Max1=b;
        }
    }
    else
        if(b>c&&b>a)
        {
            Max3=b;
            if(a>c)
            {
                Max2=a;
                Max1=c;
            }
            else
            {
                Max2=c;
                Max1=a;
            }
        }
        else
        {
            Max3=c;
            if(a>b)
            {
                Max2=a;
                Max1=b;
            }
            else
            {
                Max2=b;
                Max1=a;
            }
        }
    cin>>d;
    if(d>Max3)
    {
        Max1=Max2;
        Max2=Max3;
        Max3=d;
    }
    else
        if(d>Max2)
        {
        Max1=Max2;
        Max2=d;
        }
        else
            if(d>Max1)
                Max1=d;
    cin>>d;
    if(d>Max3)
    {
        Max1=Max2;
        Max2=Max3;
        Max3=d;
    }
    else
        if(d>Max2)
        {
        Max1=Max2;
        Max2=d;
        }
        else
            if(d>Max1)
                Max1=d;

    S=Max1+Max2+Max3;
                cout<<S;
    return 0;
}
