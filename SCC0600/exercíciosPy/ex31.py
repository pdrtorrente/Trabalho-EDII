n = int(input())
lista = []

for i in range(n):
  inp = int(input())
  lista.append(inp)

decrescente = sorted(lista, reverse=True)
crescente = sorted(lista)

if crescente == lista:
  res = 1
elif decrescente == lista:
  res = -1
else: 
  res = 0

print(res)