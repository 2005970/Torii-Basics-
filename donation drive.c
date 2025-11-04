#include <stdio.h>

int main() {
    int N, X, remaining;
    scanf("%d %d", &N, &X);
    remaining = N - X;
    printf("%d\n", remaining);

    return 0;
}
