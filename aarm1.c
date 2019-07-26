#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, e, r, n = 0, s = 0;
    scanf("%d %d", &a, &b);
    for(c= a+1; c < b; c++)
    {
        d = c;
        e = c;
        
        while (d!=0)
        {
            d=d/10;
            n++;
        }
        while (e!=0)
        {
            r=e%10;
            s=s+pow(r, n);
            e=e/10;
        }

        if (s==c) {
            printf("%d ", c);
        }
    
        n = 0;
        s = 0;
    }
    return 0;
}
