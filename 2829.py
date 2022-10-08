palavras = []
n = int(input())

for i in range(n):
    palavras.append(input())

ordenado = sorted(palavras)
for i in sorted(ordenado, key=str.upper):
    print(i)
