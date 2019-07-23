#include <iostream>
#include <cstring>
using namespace std;
char s[1001],aux[1001];
int main()
{
    cin.get(s,1001);
    for(int i=0;s[i]!=0;i++)
        if(strchr("aeiou",s[i])!=0){
        strcpy(aux,s+i+1);
        s[i+1]=s[i];
        strcpy(s+i+2,aux);
        i++;
        }
        cout<<s;
    return 0;
}
