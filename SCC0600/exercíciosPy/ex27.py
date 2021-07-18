n = int(input())

casas = 0
soma = 0

while 10**casas <= n:
  casas = casas + 1

rcounter = casas
new = n

for _ in range(casas):
  digito = new // 10**(rcounter - 1)
  new = new - digito * 10**(rcounter - 1)
  soma = soma + digito
  rcounter = rcounter - 1

print(soma)