vetor = []
for i in range(10):
    N = int(input())
    if (N <= 0):
        N = 1
    vetor.append(N)

for index,j in enumerate(vetor):
    print('X[{}] = {}'.format(index, j))