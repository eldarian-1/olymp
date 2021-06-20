#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;
typedef pair<int, vector<int>> piv;
typedef map<int, vector<int>> miv;

typedef struct castle {int a, b, c;} cas;
typedef vector<castle> vc;

int n, m, k;
vc v;
miv p;

void add(int u, int v) {
    if(p.find(v) == p.end())
        p.insert(piv(v, vi({u})));
    else
        p[v].push_back(u);
}

bool pos() {
    sort(v.begin(), v.end(), [](cas l, cas r){return l.a - r.a;});
    frn(i, 0, n)
        if(v[i].a > k)
            return false;
        else
            k += v[i].b;
    return true;
}

int main() {
    cin >> n >> m >> k;
    v = vc(n);
    frn(i, 0, n)
        cin >> v[i].a >> v[i].b >> v[i].c;
    frn(i, 0, m) {
        int u, v;
        cin >> u >> v;
        add(u, v);
    }
    if(!pos()) {
        cout << -1;
        return 0;
    }
}