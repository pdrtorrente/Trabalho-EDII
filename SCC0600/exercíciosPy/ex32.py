n = int(input())

for i in range(1000):
  if (i * (i+1) * (i+2)) == n:
    res = 'S'
    break
  else:
    res = 'N'

print(res)