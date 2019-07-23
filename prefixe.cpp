#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[20];
    int l,i,j;
    
    cin.get(s,20);
    l=strlen(s);
    for(i=strlen(s)-1;i>=0;i--){
       for(j=0;j<=i;j++)
        cout<<s[j];
    cout<<endl;
}
   for(i=0;i<strlen(s);i++){
       for(j=i;j<strlen(s);j++)
        cout<<s[j];
    cout<<endl;
}


        return 0;
}
