#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

int j = 0, m = 0;
string s;

int main() {
    cin >> s;
    frn(i, 0, s.size()) {
        if(s[i] == '1') {
            j = 0;
            continue;
        }
        ++j;
        m = max(m, j);
    }
    cout << m;
    return 0;
}