//When two taps are working together to fill an empty tank, you can calculate the time it takes to fill the tank using the concept of rates.
//Tap A fill the tank in X minutes.
//Tap B fill the tank in Y minutes.


#include<stdio.h>
int main()
{
int x,y;
scanf("%d %d\n",&x,&y);

int total_time = (x*y)/(x+y);
printf("%d", total_time);
}
