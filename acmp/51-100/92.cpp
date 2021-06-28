#include <stdio.h>

int n, a, b;

int main() {
    scanf("%d", &n);
    a = n / 6;
    b = n * 2 / 3;
    printf("%d %d %d", a, b, a);
    return 0;
}