#include <iostream>

using namespace std;
char s[1001],voc[]="AEIOU";
int i,j,nr,l,Max;
int main()
{
    cin.get(s,1001);
    for(i=0;voc[i]!='\0';i++){
        nr=0;
        for(j=0;s[j]!='\0';j++)
            if(voc[i]==s[j]||voc[i]==s[j]-32)
                nr++;
                if(nr>Max){
                Max=nr;
                l=voc[i];
                }
}
cout<<(char)l;
    return 0;
}
