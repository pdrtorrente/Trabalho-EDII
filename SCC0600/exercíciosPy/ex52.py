dim = str(input())
vecinput = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newdim = numerize(dim, 2)
linhas = newdim[0]
colunas = newdim[1]
newvec = numerize(vecinput, (colunas * linhas))
matriz = [[0] * colunas] * linhas

counter = 0
for k in range(linhas):
  for i in range(colunas):
    matriz[k][i] = newvec[counter]
    counter = counter + 1
  soma = 0
  for j in range(len(matriz[k])):
    soma += matriz[k][j]
  print (soma)  
