n = int(input())
inpstr = str(input())

lista = inpstr.split(' ')
for i in range(len(lista)):
  lista[i] = int(lista[i])

counterlist = [1]
counter = 0
j = 0

while j + 1 < len(lista):
  if lista[j] <= lista[j + 1]:
    counterlist[counter] += 1
  else:
    # j == 0 or lista[j - 1] >= lista[j]
    counterlist.append(1)
    counter += 1
  j += 1

counterlist.sort(reverse=True)

print(counterlist[0])