#include <stdio.h>

int main() {
    int T, S, B;
    double capacity_kb;
    scanf("%d %d %d", &T, &S, &B);
    capacity_bytes = 2LL * T * S * B * 512;

    capacity_kb = (double)capacity_bytes / 1024;
    printf("%.0f KB\n", capacity_kb);

    return 0;
}

