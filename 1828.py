n=int(input())
R=''
for i in range(1,n+1):
    s,r=map(str,input().split())
    
    if s == 'tesoura' and r == 'papel':
        R = "Bazinga!"
        
    elif s == 'papel' and r == 'pedra':
        R = "Bazinga!"
        
    elif s == 'pedra' and r == 'lagarto':
        R = "Bazinga!"
        
    elif s == 'lagarto' and r =='Spock':
        R = "Bazinga!"
       
    elif s == 'Spock' and r == 'tesoura':
        R = "Bazinga!"
        
    elif s == 'tesoura' and r == 'lagarto':
        R = "Bazinga!"
       
    elif s == 'lagarto' and r == 'papel':
        R = "Bazinga!"
        
    elif s == 'papel' and r == 'Spock':
        R = "Bazinga!"
        
    elif s == 'Spock' and r == 'pedra':
        R = "Bazinga!"
        
    elif s == 'pedra' and r == 'tesoura':
        R = "Bazinga!"
        
    elif s==r:
        
        R = "De novo!"
    else:
        
        R = "Raj trapaceou!"
        
    print("Caso #{}: {}".format(i, R))
        
