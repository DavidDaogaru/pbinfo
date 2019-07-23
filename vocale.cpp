#include <iostream>
#include <cstring>

using namespace std;

char s[20];

int main() {
    cin>>s;
    for (int i=0; s[i]!=0; i++)
        if (strchr("aeiou",s[i]) != NULL)
            s[i] = s[i] - (  'h'-'H'  );

    cout<<s;


    return 0;
}
