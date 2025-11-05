#include<stdio.h>
int main()
{
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    float avg=(num1 + num2)/2.0;
    printf("Average of %d and %d is: %.2f\n", num1, num2, avg);
}
