n1 = int(input())
n2 = str(input())
n3 = int(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

arrnumerizado = numerize(n2, n1)

indexencontrado = -1
for i in range(len(arrnumerizado)):
  if arrnumerizado[i] == n3:
    indexencontrado = i
    break

print(indexencontrado)