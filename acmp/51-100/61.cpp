#include <stdio.h>

char t;
const char *s = "qwertyuiopasdfghjklzxcvbnm";

int main() {
    scanf("%c", &t);
    for(int i = 0; i < 26; ++i)
        if(s[i] == t) {
            if(i == 25) i = 0;
            else ++i;
            t = s[i];
            break;
        }
    printf("%c", t);
    return 0;
}