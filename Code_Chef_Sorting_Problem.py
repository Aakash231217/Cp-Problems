test_cases = int(input())

while(test_cases > 0):
  n_k = input().split()
  n, k = int(n_k[0]), int(n_k[1])

  values = list(map(int, input().split()))
  
  x = values[k-1]
  count = 0

  # find the right index just for k:
  for i in range(n):
    if values[i] < x:
      count += 1
                
  print(count+1)

  test_cases -= 1
