n = int(input())
vecinput = str(input())
maiorque = int(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newvec = numerize(vecinput, n)
resvec = []

for i in range(n):
  if newvec[i] > maiorque:
    resvec.append(newvec[i])

print(*resvec)