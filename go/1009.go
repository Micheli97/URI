package main

import "fmt"

/*
	Recebe o valor de acordo com as variaveis.
	Mostra o valor do salario do funcionario.
	Onde o calculo é baseado na quantidade de vendas efetuadas pelo vendedor.
*/
func main() {
	var nomeVendedor string
	var salarioFixo, vendasEfetuadas float64

	fmt.Scanln(&nomeVendedor)
	fmt.Scanln(&salarioFixo)
	fmt.Scanln(&vendasEfetuadas)

	salario := salarioFixo + (vendasEfetuadas * 15/100)

	fmt.Printf("TOTAL = R$ %.2f\n", salario)
}