#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n;
vi v;

int main() {
    scanf("%d", &n);
    v = vi(n);
    frn(i, 0, n)
        scanf("%d", &v[i]);
    for(int i = n - 1; i >= 0; --i)
        printf("%d ", v[i]);
    return 0;
}