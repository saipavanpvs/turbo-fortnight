/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
