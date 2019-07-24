#include<stdio.h>
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        printf("no");
        
        else
        printf("yes");
        break;
    }
}
