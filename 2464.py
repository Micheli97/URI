alfabetoCifrado = input()
stringCript = input()
res = ""

for i in stringCript:
    res += alfabetoCifrado[ord(i) - 97]

print(res)
