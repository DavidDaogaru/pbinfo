#include <iostream>
#include <cstring>
using namespace std;
char s[1001],fr[256];
int i;
int main()
{
    cin.get(s,1001);
    for(i=0;s[i]!=0;i++){
        fr[s[i]]++;
        if(fr[s[i]]==1&&s[i]<='z'&&s[i]>='a')
            cout<<s[i]<<" ";
    }
    return 0;
}
