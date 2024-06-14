package main

import (
    "fmt"
)

func main() {
    var X, N int
    fmt.Scanf("%d", &X)
    fmt.Scanf("%d", &N)
    for i := 0; i < N; i++ {
        var a, b int
        fmt.Scanf("%d %d", &a, &b)
        X -= a * b
    }
    if X == 0 {
        fmt.Println("Yes")
    } else {
        fmt.Println("No")
    }
}