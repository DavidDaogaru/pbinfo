#include <iostream>
#include <cstring>

using namespace std;

char s[300];

int main() {
    cin.get(s, 300);
    for (int i=1; s[i+1]!=0; i++)
        if ((s[i]>='a' && s[i]<='z') && (s[i-1] == ' ' || s[i+1] == ' '))
            s[i] = s[i] - (  'h'-'H'  );

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= (  'h'-'H'  );

    if (s[  strlen(s)-1  ] >= 'a' && s[  strlen(s)-1 ] <= 'z')
        s[  strlen(s)-1 ] -= (  'h'-'H'  );

    cout<<s;


    return 0;
}
