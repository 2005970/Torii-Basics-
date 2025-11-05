#include<stdio.h>
int main()
{
    float CP;
    float SP;
    scanf("%f %f",&SP,&CP);
    float profit=CP-SP;
    double PP=(profit/SP)*100;
    printf("%.2f",PP);
}
