#include <bits/stdc++.h>
using namespace std;

int t, n;

bool start() {
    if (n % 2 == 1)
        return true;
    if (!(n & (n-1))) {
        int power = __builtin_ctz(n);
        if (power % 2== 0 )
            return false;
        else
            return true;
    } else
        return false;
}

const char *bob(bool b) {
    return (b ? "Bob" : "Alice");
}

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        start();
        cout << bob(start()) << '\n';
    }
    return 0;
}