#include <iostream>

using namespace std;

struct fractie {
    int a;
    int b;
};

fractie v[100];
fractie s;

int n, i, a, b, r;

int main() {
    cin>>n;
    s.a = 0;
    s.b = 1;
    for (i=1;i<=n;i++) {
        cin>>v[i].a>>v[i].b;
        // s = s + v[i];
        s.a = s.a * v[i].b + s.b * v[i].a;
        s.b *= v[i].b;

        a = s.a;
        b = s.b;
        while(b != 0) {
            r = a%b;
            a = b;
            b = r;
        }
        s.a /= a;
        s.b /= a;
    }

    cout<<s.a<<" "<<s.b;
}
