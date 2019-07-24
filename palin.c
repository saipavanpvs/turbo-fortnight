#include <stdio.h>

int main()
{
    int n,s=0,r,i,N;
    scanf("%d",&n);
    N=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        
    }
    if(s==N)
    printf("yes");
    else
    printf("no");
    
}
