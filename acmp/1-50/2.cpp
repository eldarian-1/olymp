#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)
int n, r = 0;

int main() {
    cin >> n;
    if(n > 0) frn(i, 1, n + 1) r += i;
    else for(int i = 1; i >= n; ++n) r += n;
    cout << r;
    return 0;
}