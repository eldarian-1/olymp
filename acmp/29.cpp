#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n;
vi a, b;

int f(int n) {
    if(n == 0)
        return 0;
    if(b[n])
        return b[n];
    if(n - 2 >= 0) {
        int c = abs(a[n] - a[n - 1]) + f(n - 1);
        int d = 3 * abs(a[n] - a[n - 2]) + f(n - 2);
        return b[n] = min(c, d);
    }
    else
        return b[1] = abs(a[1] - a[0]);
}

int main() {
    cin >> n;
    a = vi(n);
    b = vi(n, 0);
    frn(i, 0, n)
        cin >> a[i];
    cout << f(n - 1);
    return 0;
}