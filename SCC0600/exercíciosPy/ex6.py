#dinheiro
n = int(input())
#custo por chocolate
c = int(input())
#quantas embalagens para trocar por 1
m = int(input())

rest = 0
choc1 = 0
choc2 = 0
total = 0
k = 0
# PROCESSAMENTO:
if c > 0:
  # chocolates comprados na primeira vez
  choc1 = n // c
if m > 1 and m <= choc1:
  # chocolates pegos com embalagens
  rest = choc1
  while rest >= m:
    k = k + 1
    # chocolates pegos na troca
    choc2 = rest // m
    # embalagens restantes
    rest = choc2 + (rest % m)
    # calcular o total até o momento
    total = total + choc2

res = total + choc1

# SAIDA:
print(int(res))