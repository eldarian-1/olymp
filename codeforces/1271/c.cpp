#include <bits/stdc++.h>
using namespace std;

#define fr(a, b) for(int a = 0; a < b; ++a)

int max(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int n, x, y, ix, iy, m, r = 0, l = 0, u = 0, d = 0;

int main() {
    cin >> n >> x >> y;
    while(n--) {
        cin >> ix >> iy;
        if(ix < x)
            ++l;
        if(ix > x)
            ++r;
        if(iy < y)
            ++d;
        if(iy > y)
            ++u;
    }
    m = max(l, r, d, u);
    cout << m << endl;
    if(m == l)
        cout << x - 1 << ' ' << y;
    else if(m == r)
        cout << x + 1 << ' ' << y;
    else if(m == d)
        cout << x << ' ' << y - 1;
    else if(m == u)
        cout << x << ' ' << y + 1;
}