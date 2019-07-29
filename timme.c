#include<stdio.h>
void main()
{
int min,hours,minutes,hours_1,minutes_1,h,m;
scanf("%d%d",&hours,&minutes);
scanf("%d%d",&hours_1,&minutes_1);
if(hours>hours_1&&minutes>minutes_1)
{
h=hours-hours_1;
m=minutes-minutes_1;
}
else if(hours>hours_1&&minutes<minutes_1)
{
h=hours-hours_1;
m=minutes_1-minutes;
}
else if(hours<hours_1&&minutes<minutes_1)
{
h=hours_1-hours;
m=minutes_1-minutes;
}
else
{
h=hours_1-hours;
m=minutes-minutes_1;
}
printf("%d\t%d",h,m);


}

