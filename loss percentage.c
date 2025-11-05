#include<stdio.h>
int main()
{
    float SP;
    float CP;
    scanf("%f %f",&CP,&SP);
    float loss=CP-SP;
    double LP=(loss/CP)*100;
    printf("%.2f", LP);
}
