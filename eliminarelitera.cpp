#include <iostream>
#include <cstring>
using namespace std;
char s[101],*p,aux[101];
int n,ok;
int main()
{
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=0){
        n=strlen(p);
        if(n>1&&n%2!=0){
            strcpy(p+n/2, p+n/2+1);
            ok=1;}
        strcat(aux,p);
        strcat(aux," ");
        p=strtok(NULL, " ");
    }
    aux[strlen(aux)-1]=0;
    if(ok==0)
        cout<<"nu exista";
    else
        cout<<aux;

    return 0;
}
