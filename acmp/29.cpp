#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)
#define INF 1e9

typedef vector<int> vi;

int n, *a;
vi v;

int f(int n, int r) {
    if(n == 0)
        return r;
    if(v[n])
        return v[n];
    if(n - 2 >= 0)
        return v[n] = min(f(n - 1, r + abs(a[n] - a[n - 1])), f(n - 2, r + 3 * abs(a[n] - a[n - 2])));
    else
        return v[1] = r + abs(a[1] - a[0]);
}

int main() {
    cin >> n;
    a = new int[n];
    v = vi(n, 0);
    frn(i, 0, n)
        cin >> a[i];
    cout << f(n - 1, 0);
    return 0;
}