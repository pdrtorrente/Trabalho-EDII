x1 = int(input())
v1 = int(input())
x2 = int(input())
v2 = int(input())

if ((v1 > v2) and (x2 - x1) % (v2 - v1) == 0) or x1 == x2:
  print('SIM')
else:
  print('NAO')