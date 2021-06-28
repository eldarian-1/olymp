#include <stdio.h>

char s[10];
int x;

const char *f(bool s) {
    if(s && x % 2 || !s && x % 2)
        return "Yes";
    return "No";
}

int main() {
    scanf("%s\n%d", s, &x);
    printf("%s", f(s[0] == 'H'));
    return 0;
}