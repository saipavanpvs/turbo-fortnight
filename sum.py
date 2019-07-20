sum=0
N,K=map(int,input().split())
a=list(map(int,input().split()))[:N]
for i in range(0,K):
       sum=sum+a[i]
print(sum)
       
