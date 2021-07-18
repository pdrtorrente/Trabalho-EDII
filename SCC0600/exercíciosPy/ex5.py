# ENTRADA:
ano = int(input())

# PROCESSAMENTO:
if ano <= 0:
  res = -1
else:
  # ano > 0
  if ano % 400 == 0 or (ano % 4 == 0 and ano % 100 != 0):
    res = 1
  else:
    res = 0

# SAIDA:
print(res)