#include <fstream>
#include <cstring>
using namespace std;
ifstream f ("palindrom.in");
ofstream g ("palindrom.out");

char s [1001];
int st, dr, ok, n;
int main (){
    f>>n;
    while (n--) {
        f>> s;
        st=0;
        dr=strlen (s)-1;
        ok=1;
        while (st <dr){
            if (s [st]!=s [dr])
                ok=0;
            st++;
            dr--;
        }
        g<<ok<<"\n";

    }
    return 0;
}
