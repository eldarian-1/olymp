#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n, m;
vi v;

int main() {
    cin >> n;
    v = vi(n);
    frn(i, 0, n) {
        cin >> v[i];
        if(v[i] % 2 == 0)
            ++m;
    }
    frn(i, 0, n) {
        if(v[i] % 2)
            cout << v[i] << ' ';
    }
    cout << '\n';
    frn(i, 0, n) {
        if(v[i] % 2 == 0)
            cout << v[i] << ' ';
    }
    cout << '\n' << (m >= n - m ? "YES" : "NO");
    return 0;
}