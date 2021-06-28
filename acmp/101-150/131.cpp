#include <stdio.h>

int n, ta, ts, i = -1, j = 0, mx = -1;

int main() {
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &ta, &ts);
        ++j;
        if(ts == 1 && ta > mx) {
            i = j;
            mx = ta;
        }
    }
    printf("%d", i);
    return 0;
}