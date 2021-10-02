package main
 
import (
    "fmt"
)
 
func main() {
	// Média 1
    var a, b float64
    fmt.Scan(&a)
    fmt.Scan(&b)
    media := (a*3.5 + b*7.5) / 11
    
    fmt.Println(fmt.Sprintf("MEDIA = %.5f", media))
}
