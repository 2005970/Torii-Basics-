#include <stdio.h>

int main() {
    int side;
    scanf("%d", &side);

    int surface_area = 6 * side * side; 
    int volume = side * side * side;     

    printf("Surface area = %d and Volume = %d", surface_area, volume);

    return 0;
}
