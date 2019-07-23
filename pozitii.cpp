#include <iostream>
#include <cstring>
using namespace std;
char s[256];
int i,nr;
int main()
{

    cin.get(s,256);
    for(i=1;s[i]!=0;i++)
        if(strchr("aeiou",s[i])!=0)
           if(s[i-1]>='a'&&s[i-1]<='z'&& strchr("aeiou",s[i-1])==0 )
             if(s[i+1]>='a'&&s[i+1]<='z'&& strchr("aeiou",s[i+1])==0 )
                nr++;
    cout<<nr;
    return 0;
}
