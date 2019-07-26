#include<stdio.h>
void main()
{
    int a,i,s=1;
    scanf("%d",&a);
    if(a==0)
    printf("%d",s);
    else
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("%d",s);
    
}
