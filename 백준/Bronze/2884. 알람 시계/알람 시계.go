package main

import (
    "fmt"
)

func main() {
    var H, M int
    fmt.Scanf("%d %d", &H, &M)
    Total := H * 60 + M - 45
    if Total < 0 {
        Total += 1440
    }
    fmt.Printf("%d %d", Total / 60, Total % 60)
}