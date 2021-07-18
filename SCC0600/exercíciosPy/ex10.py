n = int(input())
res = -1
counter = True

for k in range(n):
  if k != 0 and k != 1 and n%k == 0:
    counter = False

if counter:
  res = 1
else:
  res = 0

if n <= 1:
  res = 0

print (res)