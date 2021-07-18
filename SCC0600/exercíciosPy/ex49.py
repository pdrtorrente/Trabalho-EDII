n = int(input())
vecinput1 = str(input())
vecinput2 = str(input())

def numerize (arr, rang):
  newarr = [0] * rang
  splited = arr.split(' ')
  for k in range(rang):
    newarr[k] = int(splited[k])
  return newarr

newvec1 = numerize(vecinput1, n)
newvec2 = numerize(vecinput2, n)
resvec = [0] * 2 * n

for i in range(len(resvec)):
  if i % 2 == 0:
    resvec[i] = newvec1[i//2]
  else:
    resvec[i] = newvec2[i//2]

print(*resvec)