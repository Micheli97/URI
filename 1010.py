x = input().split(" ")
y = input().split(" ")

cod1, qtde1, valor1 = x
cod2, qtde2, valor2 = y

total = (int(qtde1) * float(valor1)) + (int(qtde2) * float(valor2))

print("VALOR A PAGAR: R$ %0.2f" %total)