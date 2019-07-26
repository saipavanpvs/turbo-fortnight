

#include <stdio.h>

int main()
{
int a,s=0,q,r,p;
scanf("%d",&a);
p=a;
while(a!=0)
{
    r=a%10;
    s=s+r*r*r;
    a=a/10;
}
if(p==s)
printf("yes");
else
printf("no");
}
