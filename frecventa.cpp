#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int n, i, j, maxim;
char s[1001];
int f[100];
int main() {
    cin.get(s, 1001);
    for (i=0;s[i]!=0;i++)
        if (s[i] >= 'a' && s[i]<='z')
            f[s[i]-'a']++;
    for (i=0;i<26;i++)
        if (f[i] > maxim) {
            maxim = f[i];
            j = i;
        }
    cout<<(char)(j+'a');
    return 0;
}
