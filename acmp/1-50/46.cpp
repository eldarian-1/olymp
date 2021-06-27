#include <cstdio>
#include <cmath>
using namespace std;

long double e = 2.7182818284590452353602875l;
int n;

int main() {
    //e = exp(1.l);
    scanf("%d", &n);
    char buff[100];
    snprintf(buff, sizeof buff, "%%1.%dLF", n);
    printf(buff, e);
    return 0;
}