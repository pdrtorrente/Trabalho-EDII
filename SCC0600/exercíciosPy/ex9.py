choice = None
somageral = 0
somaimpar = 0
somapar = 0

while choice != 0:
  n = int(input())

  if n%2 == 0:
    #PAR
    somapar = somapar + n
  else:
    #IMPAR
    somaimpar = somaimpar + n
  somageral = somageral + n  
  choice = n

print (somapar)
print (somaimpar)
print (somageral)