n1 = int(input())
n2 = int(input())

def multiplicar(num1, num2):
  mult = 0
  for k in range(num1):
    mult = num2 + mult
  return mult

def elevar(num1, num2):
  pot = 1
  for k in range(num1):
    pot = multiplicar(pot, num2)
  return pot

print(elevar(n2, n1))