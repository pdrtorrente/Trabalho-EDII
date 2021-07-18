n1 = int(input())
v1 = str(input())
v2 = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newv1 = numerize(v1, n1)
newv2 = numerize(v2, n1)

newarray = [0] * n1

for i in range(n1):
  newarray[i] = newv1[i] + newv2[i]

print(*newarray)