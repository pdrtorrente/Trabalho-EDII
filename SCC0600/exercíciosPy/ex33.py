n = int(input())

res = '1 1'
n1 = 1
n2 = 1

if n > 1:
  for i in range(n - 2):
    n3 = n1 + n2
    n1 = n2
    n2 = n3

    res = res + ' ' + str(n3)
elif n == 1:
  res = '1'
else:
  res = '0'

print(res)