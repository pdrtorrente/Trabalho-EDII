n = int(input())
vecinput = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newvec = numerize(vecinput, n)
vecpar = []
vecimpar = []

for i in range(len(newvec)):
  if newvec[i] % 2 == 0:
    vecpar.append(newvec[i])
  else:
    vecimpar.append(newvec[i])

print(*vecpar)
print(*vecimpar)