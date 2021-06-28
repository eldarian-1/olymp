#include <stdio.h>
#include <math.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int n, i = 0, a, m = 0;

int main() {
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &a);
        if(a > 0)
            ++i;
        else
            i = 0;
        m = max(m, i);
    }
    printf("%d", m);
    return 0;
}