#include <iostream>
#include <cstring>
using namespace std;
int i,nr;
char s[101],*p;
int main()
{
   cin.get(s,256);
   p=strtok(s," ");
   while(p!=0){
        if(strchr(p,'a')!=0)
            nr++;
    p=strtok(NULL," ");}
        cout<<nr;
    return 0;
}
