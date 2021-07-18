x = int(input())
ent = 0
counter = 0 

while ent >= 0:
  n = int(input())
  if n == x:
    counter = counter + 1
  ent = n

print(counter)