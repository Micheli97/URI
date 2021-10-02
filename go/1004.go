package main
 
import (
    "fmt"
)
 
func main() {
	// Produto simples
    var a, b int64
    fmt.Scan(&a)
    fmt.Scan(&b)
    
    fmt.Println(fmt.Sprintf("PROD = %v", a*b))
}
