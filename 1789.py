contro=True

while contro:
   
    try:
         les = int(input(''))
         if les>=1 and les<=500:
            l = list(map(int, input().split()))
            respost= ''
            if  max(l) <10:
                respost=('1')
            elif max(l) >= 20:
                respost=('3')
            elif max(l) > 10 or max(l) <20:
                respost=('2')
            print(respost)
    except EOFError:
        contro=False
           
