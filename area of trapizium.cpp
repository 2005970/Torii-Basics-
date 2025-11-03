//Given the base1, base2, and height of Trapezium.Calculate the area of Trapezium.
//Note: Adjust the area upto four decimal points.

#include<stdio.h>
int main()
{
int b1,b2,h;
scanf("%d",&b1);
scanf("%d",&b2);
scanf("%d",&h);

double area=1/2*(b1+b2)*h;
printf("%.4f",area);
}
return 0;
}
