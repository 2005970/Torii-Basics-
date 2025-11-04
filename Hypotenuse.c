//Find the Hypotenuse of a right angled triangle with two given sides X,Y.

#include<stdio.h>
#include<math.h>
int main()
{
int x,y;
float hyp;
scanf("%d %d", &x,&y);
hyp=sqrt(pow(x,2)+pow(y,2));
printf("%.2f",hyp);
}
