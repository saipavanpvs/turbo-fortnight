#include<stdio.h>
void main()
{
int i;
char c;
scanf("%c",&c);
i=c;
if(i==97||i==101||i==105||i==111||i==117)
printf("vowel");
else if(i<96||i>122)
printf("invalid");
else
printf("consonant");
}
