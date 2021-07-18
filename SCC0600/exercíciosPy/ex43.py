n1 = int(input())
n2 = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

arrnumerizado = numerize(n2, n1)

newarray = [0] * n1
for i in range(n1):
  if i % 2 == 0 and n1 - 1 != i:
    newarray[i] = arrnumerizado[i + 1]
    newarray[i + 1] = arrnumerizado[i]
  elif n1 - 1 == i and n1 % 2 != 0:
    newarray[i] = arrnumerizado[i]

print(*newarray)