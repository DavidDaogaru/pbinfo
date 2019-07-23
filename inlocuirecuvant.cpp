#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream f("inlocuirecuvant.in");
ofstream g("inlocuirecuvant.out");
char s[1001],cuvant1[1001],cuvant2[1001],*p,aux[1001];
int main()
{
    f>>cuvant1>>cuvant2;
    f.get();
    f.get(s,1001);
    p=strtok(s," ");
    while(p!=0){
		if(strcmp(cuvant1,p)==0)
			strcat(aux,cuvant2);
		else
			strcat(aux,p);
		strcat(aux," ");
		p=strtok(NULL," ");
    }
    g<<aux;
    return 0;
}
