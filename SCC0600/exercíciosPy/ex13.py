inp = int(input())
fat = 1
soma = 0

for k in range(inp + 1):
  for i in range( 1, k + 1 ):
    fat = fat * i
  soma = soma + fat
  fat = 1

print (soma)