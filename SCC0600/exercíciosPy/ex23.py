x = int(input())
maior = int(input())

for i in range(x-1):
  n = int(input())
  if n > maior:
    maior = n

print(maior)