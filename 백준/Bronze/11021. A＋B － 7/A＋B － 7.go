package main

import (
    "fmt"
)

func main() {
    var T, A, B int
    fmt.Scanf("%d", &T)
    for i := 1; i <= T; i++ {
        fmt.Scanf("%d %d", &A, &B)
        fmt.Printf("Case #%d: %d\n", i, A + B)
    }
}