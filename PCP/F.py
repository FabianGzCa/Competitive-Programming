val1 = int(input())

res = 1
res2 = 1
tmp = res

val1=val1-1

while (val1 > 0):
	tmp = res2
	res2 = res2+res
	res = tmp
	val1 = val1-1

print(res2)