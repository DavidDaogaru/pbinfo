#include <iostream>
#include <cstring>
using namespace std;
char s[1001],*p,sep[]=" ";
int nr;
int main()
{
  cin.getline(s,1001);
  nr=0;
  p=strtok(s,sep);
  while(p!=0){
    int n=strlen(p);
    if(strchr("aeiouAEIOU",p[0])!=0&&strchr("aeiouAEIOU",p[n-1])!=0)
         nr++;
    p=strtok(NULL,sep);

  }
  cout<<nr;
    return 0;
}
