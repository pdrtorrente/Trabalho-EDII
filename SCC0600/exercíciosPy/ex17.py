n1 = int(input())
n2 = int(input())
n3 = int(input())
res = 0

if n1 > n2:
  res = n1
else:
  res = n2

if res < n3:
  res = n3

print(res)