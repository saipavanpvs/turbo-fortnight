#include<stdio.h>
void main()
{
int a[100],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t%d\n",a[i],i);
}
