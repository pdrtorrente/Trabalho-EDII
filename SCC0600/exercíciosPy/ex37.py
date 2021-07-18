temp = str(input())
vet = temp.split(" ")

def numerize (arr):
  for i in range(len(arr)):
    arr[i] = int(arr[i])
  return arr

def calcMedia (arr):
  soma = 0
  for i in range(len(arr)):
    soma += arr[i]
  media = soma / len(arr)
  return media

def acimaMedia (arr):
  media = calcMedia(numerize(arr))
  quant = 0
  for i in range(len(arr)):
    if arr[i] > media:
      quant += 1
  return quant
    
print(acimaMedia(vet))