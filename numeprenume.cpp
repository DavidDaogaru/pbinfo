#include <iostream>
#include <cstring>
using namespace std;
char x[1001],y[1001];
int main()
{
    cin>>x>>y;
    for(int i=0;y[i]!=0;i++)
    if(strchr("aeiouAEIOU",y[i])!=0){
           strcpy(y+i,y+i+1);
           i--;
    }
    strcat(y," ");
    strcat(y,x);
    cout<<y;
    return 0;
}
