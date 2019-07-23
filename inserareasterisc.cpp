#include <iostream>
#include <cstring>
using namespace std;
char s[1001], aux[1001];
int i,j;
int main()
{
    cin.get(s,1001);
    int ok=0;
    for(i=0;s[i]!=0;i++)
        if(strchr("aeiou",s[i])!=NULL){
            ok=1;
            strcpy(aux,s+i+1);
            s[i+1]='*';
            strcpy(s+i+2,aux);
            i++;
        }
        if(ok==1)
        cout<<s;
            else
        cout<<"FARA VOCALE";
    return 0;
}
