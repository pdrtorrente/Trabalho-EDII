limite = int(input())
multa = float(input())
adicional = float(input())
velocidade = int(input())
res = 0

if velocidade > limite:
  add = velocidade - limite
  res = multa + (adicional * add)

print("{:.2f}".format(res))