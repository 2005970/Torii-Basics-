#include <stdio.h>
int main() {
    float salary, HRA, DA;  
    scanf("%f", &salary);
    scanf("%f", &HRA);
    scanf("%f", &DA);
    float PF = 0.12 * salary;
    float gross_salary = salary + HRA + DA + PF;
    printf("%.2f\n", PF);
    printf("%.2f", gross_salary);

    return 0;
}
