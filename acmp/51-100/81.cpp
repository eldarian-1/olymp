#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }

int n, mx = 0, mn = 1e9, t;

int main() {
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &t);
        mx = max(mx, t);
        mn = min(mn, t);
    }
    printf("%d %d", mn, mx);
    return 0;
}