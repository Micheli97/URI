n = int(input())
fila = list(input().split())
m = int(input())
out = list(input().split())

for i in out:
    fila.pop(fila.index(i))

for i in range(len(fila)-1):
    print(fila[i], end=" ")

print(fila[-1])
