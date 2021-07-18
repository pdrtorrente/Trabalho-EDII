n1 = int(input())
n2 = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

numerizado = numerize(n2, n1)
numerizado.sort(reverse=True)
normal = numerize(n2, n1)
maior = numerizado[0]
res = normal.index(numerizado[0])

print(maior)
print(res)