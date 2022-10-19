package main

import "fmt"

/*
	Mostra o valor a pagar de acordo com os valores recebidos
*/
func main() {
	var codigoPeca1, qtdPecas1, valorPeca1 float64
	var codigoPeca2, qtdPecas2, valorPeca2 float64

	fmt.Scanf("%f %f %f", &codigoPeca1, &qtdPecas1, &valorPeca1)
	fmt.Scanf("%f %f %f", &codigoPeca2, &qtdPecas2, &valorPeca2)

	fmt.Printf("VALOR A PAGAR = R$ %.2f\n", ((qtdPecas1*valorPeca1)+(qtdPecas2*valorPeca2)))
}