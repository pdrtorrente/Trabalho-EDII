n = int(input())
res = 0

for k in range(n + 1):
  if k != 0:
    res = res + (1/k)


print("{:.4f}".format(res))