#include <stdio.h>

#define frn(a, b, c) for(int a = b; a < c; ++a)

int h = 437, n, t, i = 0;

int main() {
    scanf("%d", &n);
    frn(i, 0, n) {
        scanf("%d", &t);
        if(t <= h) {
            printf("Crash %d", i + 1);
            return 0;
        }
    }
    printf("No crash");
    return 0;
}