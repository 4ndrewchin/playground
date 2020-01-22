package main

func myincrement(ptr *int) {
    *ptr++
}

func main() {
    num := 25
    go myincrement(&num)
    go myincrement(&num)
}
