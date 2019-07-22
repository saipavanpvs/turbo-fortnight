#include<stdio.h>
void main()
{
int N,K,i,P=1;
scanf("%d %d",&N,&K);
for(i=0;i<K;i++)
{
P=N*P;
}
printf("%d",P);
}
