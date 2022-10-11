num=int(input())
for i in range(num):
    n,m=map(int,input().split())
    if(n*3)<(m*2):
        print(n*3)
    else:
        print(m*2)
