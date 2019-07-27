int main()
{
    int a[100],N,i,m;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>m)
        m=a[i];
        
    }
    printf("%d",m);
    
}
