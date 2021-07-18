# ENTRADA:
a = int(input())
b = int(input())
menor = None
res = None

if a < b:
  menor = a
else: 
  menor = b

# PROCESSAMENTO:
for k in range(menor + 1):
  if k != 0 and a % k == 0 and b % k == 0:
    res = k

# SAIDA:
print(res)