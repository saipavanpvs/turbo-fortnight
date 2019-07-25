
#include<stdio.h>
 int main()
 {
   int i, prime,a,b, n;
   scanf("%d", &a);
   scanf("%d", &b);
   for(n=a+1; n<b; n++)
   {
     prime = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         prime = 0;
         break;
       }
     if(prime)
       printf("\t %d", n);
   }
 }
