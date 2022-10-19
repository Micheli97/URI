package main

import "fmt"

/*
	Calcula a área de uma esfera no qual é lido o valor do raio
*/
func main() {
	var raio float64

	fmt.Scanln(&raio)

	pi := 3.14159

	esfera := (4.0/3) * pi * (raio * raio * raio) 
	fmt.Printf("VOLUME = %.3f\n", esfera)
}
