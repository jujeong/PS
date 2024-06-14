package main

import (
    "fmt"
    "math"
)

func main() {
    var a, b, c int
    fmt.Scanf("%d %d %d", &a, &b, &c)
    if a == b && b == c {
        fmt.Printf("%d", 10000 + a * 1000)
    } else if a == b || b == c {
        fmt.Printf("%d", 1000 + b * 100)
    } else if c == a {
        fmt.Printf("%d", 1000 + a * 100)
    } else {
        fmt.Printf("%d", int(math.Max(float64(a), (math.Max(float64(b), float64(c)))) * 100))
    }
}