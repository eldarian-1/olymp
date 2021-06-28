#include <stdio.h>

int a, b, c;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    if(a) {
        printf("%d", a);
        if(b) {
            if(b == 1)
                printf("+x");
            else if(b == -1)
                printf("-x");
            else if(b > 0)
                printf("+%dx", b);
            else
                printf("-%dx", -b);
            if(c) {
                if(c == 1)
                    printf("+y");
                else if(c == -1)
                    printf("-y");
                else if(c > 0)
                    printf("+%dy", c);
                else
                    printf("-%dy", -c);
            }
        } else if(c) {
            if(c == 1)
                printf("+y");
            else if(c == -1)
                printf("-y");
            else if(c > 0)
                printf("+%dy", c);
            else
                printf("-%dy", -c);
        }
    } else if(b) {
        if(b == 1)
            printf("x");
        else if(b == -1)
            printf("-x");
        else if(b > 0)
            printf("%dx", b);
        else
            printf("-%dx", -b);
        if(c) {
            if(c == 1)
                printf("+y");
            else if(c == -1)
                printf("-y");
            else if(c > 0)
                printf("+%dy", c);
            else
                printf("-%dy", -c);
        }
    } else if(c) {
        if(c == 1)
            printf("y");
        else if(c == -1)
            printf("-y");
        else if(c > 0)
            printf("%dy", c);
        else
            printf("-%dy", -c);
    } else printf("0");
    return 0;
}