#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;
typedef vector<int*> vpi;
typedef vector<vpi> vvpi;

int n;
vi v;
vvpi t;

ostream &operator << (ostream &out, const vvpi &t) {
    frn(i, 0, n) {
        frn(j, 0, n) {
            if(t[i][j])
                out << *t[i][j];
            else
                out << '-';
            out << '\t';
        }
        out << '\n';
    }
    return out;
}

int f(int l, int r, bool fr) {
    if(l > r)
        return 0;
    if(t[l][r])
        return *t[l][r];
    int a = f(l + 1, r, !fr) + (fr ? 1 : -1) * v[l];
    int b = f(l, r - 1, !fr) + (fr ? 1 : -1) * v[r];
    return *(t[l][r] = new int(fr ? max(a, b) : min(a, b)));
}

int main() {
    cin >> n;
    v = vi(n);
    int a[] = {0, 0};
    t = vvpi(n, vpi(n, nullptr));
    frn(i, 0, n)
        cin >> v[i];
    int ans = f(0, n - 1, true);
    //cout << t;
    cout << (ans > 0 ? 1 : ans < 0 ? 2 : 0);
}