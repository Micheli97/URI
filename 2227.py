from operator import itemgetter

teste = 0
while True:
    teste += 1
    a, v = map(int, input().split())
    if (a == v == 0): break

    aeroportos = [[i, 0] for i in range(a+1)]

    for i in range(v):
        x, y = map(int, input().split())
        aeroportos[x][1] += 1
        aeroportos[y][1] += 1

    aeroportos = sorted(aeroportos, key=itemgetter(1), reverse=True)

    ant = aeroportos[0][1]
    listAux = []
    print("Teste " + str(teste))
    for i in aeroportos:
        listAux.append(i[0])
        if i[1] != ant:
            break
        else:
            ant = i[1]

    for i in range(len(listAux) - 1):
        print(listAux[i], end=" ")

    print("\n")
