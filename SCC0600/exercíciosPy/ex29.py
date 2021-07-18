idade = int(input())

velas = [0]

for k in range(idade):
  altura = int(input())
  velas.append(altura)

velas.sort(reverse=True)

i = 0

if len(velas) > 1:
  while velas[i] == velas[0]:
    i += 1
elif len(velas) == 1:
  i = 1
else:
  i = 0

print(i)