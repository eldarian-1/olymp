#include <bits/stdc++.h>
using namespace std;

#define frn(a, b, c) for(int a = b; a < c; ++a)

typedef vector<int> vi;

int n, m, k, l;
vi a;

int main() {
    scanf("%d", &n);
    a = vi(n);
    frn(i, 0, n) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    frn(i, 0, m) {
        scanf("%d %d", &k, &l);
        frn(j, k - 1, l)
            printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}