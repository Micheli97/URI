while True:
    N = int(input())
    if (N == 0):
        break

    entrada = list(map(int,input().split()))
    mary = entrada.count(0)
    john = entrada.count(1)

    print('Mary won {} times and John won {} times'.format(mary, john))