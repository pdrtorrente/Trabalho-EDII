inp = int(input())
isPrime = True
soma = 0

for i in range(2, inp + 1):
  isPrime = True
  for k in range(2, i):
    if i % k == 0:
      isPrime = False
      break
  if isPrime and i != 1:
    soma = soma + i 

print (soma)