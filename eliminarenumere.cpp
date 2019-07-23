#include <iostream>
#include <cstring>
using namespace std;
int i,j,ok;
char s[101],aux[101];
int main()
{
    cin.get(s,101);
    for(i=0;s[i]!=0;i++)
        if(s[i]>='0'&&s[i]<='9'){
            j=i;ok=0;
            while(s[j]!=0&&s[j]!=' '){
                if(s[j]=='.')
                    ok=1;
                j++;
            }
            if(ok==1){
                strcpy(aux,s+j);
                strcpy(s+i,aux);
                i--;
            }
            else
                i=j-1;
    }


    for(i=0;s[i]!=0;i++)
        cout<<s[i];
    return 0;
}
