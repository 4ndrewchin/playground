package main

import (
    "fmt"
)

var counter = 0

func increment(amt int) {
    counter += amt
}

func main() {
    go increment(5)
    go increment(10)

    fmt.Println(counter)
}

