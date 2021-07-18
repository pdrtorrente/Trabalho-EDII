n = int(input())
lista = []

for i in range(n):
  inp = int(input())
  lista.append(inp)

lista.sort(reverse=True)

print(lista[0])
print(lista[1])