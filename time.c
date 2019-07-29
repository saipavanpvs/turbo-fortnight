#include<stdio.h>
void main()
{
int min,hours,minutes;
scanf("%d",&min);
hours=min/60;
minutes=min%60;
printf("%d\t%d",hours,minutes);
}
