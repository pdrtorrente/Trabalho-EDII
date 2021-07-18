n = int(input())
vecinput = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newvec = numerize(vecinput, n)

for i in range(n // 2):
  el1 = newvec[i]
  el2 = newvec[n - 1 - i]
  newvec[i] = el2
  newvec[n - 1 - i] = el1


print(*newvec)
