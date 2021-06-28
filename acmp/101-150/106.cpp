#include <stdio.h>

#define frn(a, b, c) for(int a = b; a < c; ++a)

int min(int a, int b) { return a < b ? a : b; }

int n, s = 0, t;

int main() {
    scanf("%d", &n);
    frn(i, 0, n) {
        scanf("%d", &t);
        s += t;
    }
    printf("%d", min(s, n - s));
    return 0;
}