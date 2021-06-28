#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int abs(int a) {
    return a > 0 ? a : -a;
}

int n, i, j;

int main() {
    scanf("%d %d %d", &n, &i, &j);
    printf("%d", min(n - abs(i - j), abs(i - j)) - 1);
    return 0;
}