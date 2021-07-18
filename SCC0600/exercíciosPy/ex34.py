n = int(input())

res = 'N'
i = 1
algoritmo = n-1

if n > 1:
  while algoritmo <= n:
    algoritmo = (2**(i-1) * (2**i - 1))
    if algoritmo == n:
      res = 'S'
      break
    i += 1

print(res)