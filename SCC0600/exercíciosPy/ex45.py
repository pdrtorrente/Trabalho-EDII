n1 = int(input())
v1 = str(input())
nums = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newv1 = numerize(v1, n1)
newnums = numerize(nums, 2)
newnums.sort()

soma = 0
if abs(newnums[0]) < n1 and abs(newnums[1]) < n1:
  for i in range(newnums[0], newnums[1] + 1):
    soma += newv1[i]
else:
  soma = 'INVALIDO'

print(soma)