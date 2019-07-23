#include <iostream>
#include <cstring>
using namespace std;
char s[800], aux[800];
int i;
int main()
{
    cin.get(s,256);
    for(i=0;s[i]!=0;i++)
        if(strchr("aeiou",s[i])!=0){
            strcpy(aux,s+i+1);
            s[i+1]='p';
            s[i+2]=s[i];
            strcpy(s+i+3,aux);
            i+=2;
        }
        cout<<s;
    return 0;
}
