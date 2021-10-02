package main
 
import (
    "fmt"
)
 
func main() {
	// blobs
    var (
        days, tests int64
        food float64
    )
    
    fmt.Scan(&tests)
    
    for i := tests; i > 0; i-- {
        days = 0
        fmt.Scan(&food)
        for food > 1 {
            days++
            food/=2
        }
        
        fmt.Println(fmt.Sprintf("%v dias", days))
    }
}
