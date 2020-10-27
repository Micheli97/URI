contr=True

while contr == True:
    N=int(input(''))
    if  1 <= N <= 15:
       m=[]
       for i in range(N):
            m.append([])
            for j in range(N):
               m[i].append(0)
               
       m[0][0]=1  
     
       for i in range(0,N):
            if i >= 1:
                m[i][0] = m[i - 1][0] * 2
            for j in range(1,N):
                m[i][j] = m[i][j - 1] * 2
        
       T = len(str(m[N - 1][N - 1]))
       for i in range(N):
            for j in range(N):
                m[i][j] = str(m[i][j])
                while len(m[i][j]) < T:
                    m[i][j] = ' ' + m[i][j]
            M = ' '.join(m[i])
            print(M)
       print()
    else:
      contr=False
