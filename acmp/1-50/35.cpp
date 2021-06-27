#include <bits/stdc++.h>
using namespace std;

long long k, a, b;

int main() {
    cin >> k;
    while(k--) {
        cin >> a >> b;
        cout << (19 * b + (a + 239) * (a + 366) / 2) << '\n';
    }
    return 0;
}