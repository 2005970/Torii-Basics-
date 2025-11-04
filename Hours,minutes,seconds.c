#include <stdio.h>

int main() {
    int total_seconds;
    scanf("%d", &total_seconds);

    int H = total_seconds / 3600;                
    int remaining_seconds = total_seconds % 3600;

    int M = remaining_seconds / 60;             
    int S = remaining_seconds % 60;             

    printf("H:M:S-%d:%d:%d", H, M, S);

    return 0;
}
