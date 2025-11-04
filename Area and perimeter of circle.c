#include <stdio.h>

int main() {
    int radius;
    float area, perimeter;
    const float pi = 3.14;
    scanf("%d", &radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);

    return 0;
}
