package main
 
import (
    "fmt"
)
 
func main() {
	// Média 2
    var a, b, c float64
    fmt.Scan(&a)
    fmt.Scan(&b)
    fmt.Scan(&c)
    media := (a*2 + b*3 + c*5) / 10
    
    fmt.Println(fmt.Sprintf("MEDIA = %.1f", media))
}
