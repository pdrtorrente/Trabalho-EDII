ent = 0
counter = 0
soma = 0
maioresdeidade = 0
nidosos = 0

while ent >= 0:
  
  n = int(input())

  if n >= 18:
    maioresdeidade = maioresdeidade + 1
  
  if n > 75:
    nidosos = nidosos + 1

  if n >= 0:
    soma = soma + n
    counter = counter + 1
  ent = n

media = soma / counter
pidosos = nidosos / counter * 100
stringpidosos = '{:.2f}'.format(pidosos)

print('{:.2f}'.format(media))
print(maioresdeidade)
print(stringpidosos + '%')