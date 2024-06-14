package main

import (
    "fmt"
)

func main() {
    var A, B, C int
    fmt.Scanf("%d %d", &A, &B)
    fmt.Scanf("%d", &C)
    total := A * 60 + B + C
    if total >= 1440 {
        total -= 1440
    }
    fmt.Printf("%d %d", total / 60, total % 60)
}