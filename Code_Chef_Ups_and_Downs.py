# cook your dish here
for _ in range(int(input())):
    x = input()
    a=input().split(" ")
    z=''
    # print(a[1])
    for i in range(int(x)):
        if(i%2==0):
            if(int(x)>int(i+1)):
                if(int(a[i])>int(a[i+1])):
                    a[i],a[i+1]=a[i+1],a[i]
        else:
            if(int(x)>int(i+1)):
                if(int(a[i])<int(a[i+1])):
                    a[i],a[i+1]=a[i+1],a[i]
    print(*a)
    
