limite = float(input())
valor1 = float(input())
valor2 = float(input())
km = float(input())

valor = 0

if km <= limite:
  valor = valor1
else:
  valor = valor2

total = valor * km

print('{:.2f}'.format(total))