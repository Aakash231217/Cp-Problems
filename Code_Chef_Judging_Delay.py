def main():
    test = int(input())
    for _ in range(test):
        count = 0
        N = int(input())
        for i in range(N):
            a,b = map(int, input().split(" "))
            if(b-a > 5):
                count += 1
        print(count)
    return 0

if __name__ == '__main__':
    main()
