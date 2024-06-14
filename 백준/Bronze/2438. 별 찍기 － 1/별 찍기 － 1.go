package main

import (
    "fmt"
)

func main() {
    var N int
    fmt.Scanf("%d", &N)
    for i := 1; i <= N; i++ {
        for j := 1; j <= i; j++ {
            fmt.Printf("*")
        }
        fmt.Println()
    }
}