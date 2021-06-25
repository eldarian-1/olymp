#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n;
vi v, m;

int f(int l, int r, int s, bool fr) {
    if(l == r)
        return s + (fr ? 1 : -1) * v[l];

    if(m[n - r + l - 1] != 1e9)
        if(fr)
            m[n - r + l - 1] = max(m[n - r + l - 1], s);
        else
            m[n - r + l - 1] = min(m[n - r + l - 1], s);
    
    int a = f(l + 1, r, s + (fr ? 1 : -1) * v[l], !fr);
    int b = f(l, r - 1, s + (fr ? 1 : -1) * v[r], !fr);

    return m[n - r + l - 1] = fr ? max(a, b) : min(a, b);
}

int main() {
    cin >> n;
    v = vi(n);
    int a[] = {0, 0};
    m = vi(n - 1, 1e9);
    frn(i, 0, n)
        cin >> v[i];
    int ans = f(0, n - 1, 0, true);
    cout << (ans > 0 ? 1 : ans < 0 ? 2 : 0);
}