#include<iostream>
#include<cstring>
using namespace std;
int main()
{ char s[20], v[]="aeiouAEIOU";
  int i,j;
  cin>>s;

  i=0;
  while(strchr(v,s[i])==0 && i<strlen(s))
    i++;
  j=strlen(s)-1;
  while(strchr(v,s[j])!=0 && j>=0)
    j--;
  if(i>=strlen(s) || j==-1)
     cout<<"IMPOSIBIL";
  else
  { char aux=s[i];
    s[i]=s[j];
    s[j]=aux;
    cout<<s;
  }
return 0;
}
