//Priya needs to park her car while she watches a movie. The parking charges at the theater are as follows:
//Rs. X for the first 1 hour
//Rs. Y for every extra hour after the first hour
//If Priya parks her car for H hours, what is the total parking charges that she should pay?

#include<stdio.h>
int main()
{
int x,y,h;
scanf("%d %d %d",&x,&y,&h);
int total;
if(h<=1)
total=x;
else
total=x+(h-1)*y;
printf("%d",total);
return 0;
}

