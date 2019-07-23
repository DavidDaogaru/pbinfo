#include <iostream>
#include <cstring>
using namespace std;
char s[256],aux[256];
int i,j;
int main(){

    cin.get(s,256);
    for(i=0;s[i]!=0;i++)
        if(i==0||(s[i-1]==' '&&s[i]!=' '))

           {
            j=i;
            while(s[j]!=' '&&s[j]!=0)
                j++;
           if(j-i==3){
               s[i]='*';
                strcpy(aux,s+j);
                strcpy(s+i+1,aux);

           }

           }
cout<<s;
return 0;
}
