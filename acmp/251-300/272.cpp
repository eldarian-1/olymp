#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int n, t, mn = 1e9, mx = -1e9;

int main() {
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &t);
        mn = min(mn, t);
        mx = max(mx, t);
    }
    printf("%d", mx - mn);
    return 0;
}