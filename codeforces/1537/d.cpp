#include <bits/stdc++.h>
using namespace std;

int t, n;

bool start() {
    if (n % 2 == 1)
        return true;
    if (!(n & (n-1)))
        return __builtin_ctz(n) % 2 != 0;
    else
        return false;
}

const char *bob(bool b) {
    return (b ? "Bob" : "Alice");
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        cout << bob(start()) << '\n';
    }
    return 0;
}