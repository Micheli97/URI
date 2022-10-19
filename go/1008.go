package main

import "fmt"

/*
	Recebe o valor de acordo com as variaveis.
	Mostra o valor do salario do funcionario.
	Onde o calculo é valorHora*horasTrabalhadas.
*/
func main() {
	var numeroFuncionario, horasTrabalhadas, valorHora float64

	fmt.Scanln(&numeroFuncionario)
	fmt.Scanln(&horasTrabalhadas)
	fmt.Scanln(&valorHora)

	fmt.Printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", numeroFuncionario, (valorHora * horasTrabalhadas))
}
