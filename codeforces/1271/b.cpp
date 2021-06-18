#include <bits/stdc++.h>
using namespace std;

#define fr(a, b) for(int a = 0; a < b; ++a)

int n;
string s;
vector<int> t;

bool right() {
    int W = 0, B = 0;
    for(char c : s)
        if(c == 'W')
            ++W;
        else
            ++B;
    return (W % 2 == 0) || (B % 2 == 0);
}

void rev(char *c) {
    *c = *c == 'W' ? 'B' : 'W';
}

bool aif(int i) {
    return s[i] != s[i + 1] && (i == 0 || s[i - 1] != s[i]);
}

bool bif(int i) {
    return i >= 1 && s[i - 1] != s[i];
}

bool cif(int i) {
    return false;
}

void f(int i) {
    if(aif(i) || bif(i) || cif(i)) {
        rev(&s[0] + i);
        rev(&s[0] + i + 1);
        t.push_back(i);
    }
}

int main() {
    cin >> n >> s;
    if(!right())
        cout << -1;
    else {
        fr(i, n - 1)
            f(i);
        cout << s;
        cout << t.size() << '\n';
        for(int i : t)
            cout << (i + 1) << ' ';
    }
}