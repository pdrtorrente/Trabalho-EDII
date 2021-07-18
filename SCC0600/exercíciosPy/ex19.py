n = int(input())

if n >= 70 or n < 16:
  print('DISPENSADO')
elif n > 15 and n < 18:
  print('FACULTATIVO')
else:
  print('OBRIGATORIO')