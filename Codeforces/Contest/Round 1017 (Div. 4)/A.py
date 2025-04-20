n = int(input())
for i in range(0, n):
	pais = input()
	res = ""
	pais = pais.split(" ")
	for word in pais:
		res+=word[0]
	print(res)

