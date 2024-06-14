package main

import (
    "fmt"
)

func main() {
    var n, res int = 0, 0
    fmt.Scanf("%d", &n)
    for i := 1; i <= n; i++ {
        res += i
    }
    fmt.Println(res)
}