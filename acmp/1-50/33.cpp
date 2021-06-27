#include <bits/stdc++.h>
using namespace std;

int a, b, n;

int main() {
    cin >> a >> b;
    n = a + b - 1;
    cout << n - a << ' ' << n - b;
    return 0;
}