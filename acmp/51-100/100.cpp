#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;
typedef vector<vi> vvi;

int n;
vvi v;

int f(int n, int k) {
    if(k < 0 || k > 9 * n)
        return 0;
    if(n == 0 && k == 0)
        return 1;
    //int r = 0;
    int &r = v[n - 1][k];
    if(r) return r;
    frn(i, k - 9, k + 1)
        r += f(n - 1, i);
    return r;
}

int main() {
    cin >> n;
    v = vvi(n, vi(n * 9 / 2 + 1, 0));
    int r = f(n, n * 9 / 2);
    cout << r << ' ';
    return 0;
}