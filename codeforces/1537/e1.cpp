#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

char pos(int i, int last) {
    int mod = last + 1;
    return s[i % mod];
}

int main() {
    cin >> n >> k >> s;

    int best = 0, cmp = 0;
    for(int i = 1; i < n; ++i) {
        char c = pos(cmp, best);
        if(c < s[i])
            break;
        else if(c > s[i]) {
            best = i;
            cmp = 0;
        }
        else
            ++cmp;
    }
 
    for(int i = 0; i < k; ++i){
        cout << s[i%(best+1)];
    }

    cout << endl;
    return 0;
}