x = int(input())
maior = 0
menor = 0
soma = 0

for i in range(x):
  n = int(input())
  if i == 0:
    menor = n
    maior = n
  if n > maior:
    maior = n
  if n < menor:
    menor = n
  soma = soma + n

print(maior)
print(menor)
print(soma)
