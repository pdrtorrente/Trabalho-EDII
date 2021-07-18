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
for i in range(len(arrnumerizado)):
  indexreverso = len(arrnumerizado) - 1 - i
  newarray[i] = arrnumerizado[indexreverso]

print(*newarray)