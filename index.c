#include <stdio.h>

int main()
{
    int a[100],b[100],i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        
    }
    for(i=0;i<n-1;i++)
    {
     printf("%d\t%d",a[i],i) ; 
    }
    
}
