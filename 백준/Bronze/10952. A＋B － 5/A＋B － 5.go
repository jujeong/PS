package main

import (
    "fmt"
)

func main() {
    var A, B int
    for {
        fmt.Scanf("%d %d", &A, &B)
        res := A + B
        if res == 0 {
            break;
        }
        fmt.Println(res)
    }
}