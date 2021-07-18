import math

largura = float(input())
altura = float(input())
custo = float(input())
rendimento = float(input())

area = largura * altura
latas = math.ceil(area / rendimento)
custototal = latas * custo

print(latas)
print('{:.2f}'.format(custototal))