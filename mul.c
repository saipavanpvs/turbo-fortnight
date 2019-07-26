#include<stdio.h>
void main()
{
    int a,i,j;
    scanf("%d",&a);
    j=a;
    for(i=1;i<=a;i++)
    {
    j=j*i;
    printf("\t%d",j);
    j=a;
    }
}
