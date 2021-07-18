n = int(input())

def listNumber(x1):
  casas = 0
  lista = []

  while 10**casas <= x1:
    casas = casas + 1

  rcounter = casas
  new = x1

  for _ in range(casas):
    digito = new // 10**(rcounter - 1)
    new = new - digito * 10**(rcounter - 1)
    lista.append(digito)
    rcounter = rcounter - 1

  return lista

separado = listNumber(n)
res = "S"

if len(separado) % 2 == 0:
  lenght = len(separado)
else:
  lenght = len(separado) - 1
  
for i in range(lenght // 2):
  if separado[i] != separado[len(separado) - i - 1]:
    res = "N"

print(res)