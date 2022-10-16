test = int(input())
for _ in range(test):
    N = int(input())
    S = input()
    count = 0
    for i in range(N):
        if S[i] == '1':
            count += 1
        else:
            break
    print(count)
