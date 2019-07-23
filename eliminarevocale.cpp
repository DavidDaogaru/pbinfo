#include <iostream>
#include <cstring>
using namespace std;
char s [20];
int n,i;
int main (){
    cin>>s;
    for(i=0;s[i]!=0;i++)
        if(strchr("aeiou",s[i])!=NULL) {
            strcpy(s+i,s+i+1);
            i--;
        }

    cout<<s;
    return 0;
}
