n = int(input())
vecinput = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newvec = numerize(vecinput, n)

menor = newvec[0]
menorind = 0
for i in range(n):
  if newvec[i] < menor:
    menor = newvec[i]
    menorind = i
zeroelmenor = newvec[0]
newvec[0] = menor
newvec[menorind] = zeroelmenor

maior = newvec[0]
maiorind = 0
for i in range(n):
  if newvec[i] > maior:
    maior = newvec[i]
    maiorind = i
ultimoel = newvec[n - 1]
newvec[n - 1] = maior
newvec[maiorind] = ultimoel

print(*newvec)