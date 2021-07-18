import math

# ENTRADA:
a = float(input())
b = float(input())
c = float(input())
res = None

# PROCESSAMENTO:
delta = b*b - 4 * a * c

if delta < 0:
  res = math.nan
else:
  x1 = (-b + math.sqrt(delta)) / (2 * a)
  x2 = (-b - math.sqrt(delta)) / (2 * a)
  res = x1 + x2

# SAIDA:
print("{:.2f}".format(res))