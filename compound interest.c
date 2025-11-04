#include<stdio.h>
#include<math.h>
int main()
{
int p,t,r;
double ci;
scanf("%d %d %d\n",&p,&t,&r);
scanf("%f", &ci);
ci=p*pow((1+r/100.0),t)-p;
printf("%.2f",ci);

return 0;
}
