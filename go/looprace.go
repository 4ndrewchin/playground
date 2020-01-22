//The variable i in the function literal is the same variable used by the loop, so the read in the goroutine races with the loop increment. (This program typically prints 55555, not 01234.)

package main

import (
    "fmt"
    "sync"
)

func main() {
	var wg sync.WaitGroup
	wg.Add(5)
	for i := 0; i < 5; i++ {
		go func() {
			fmt.Println(i) // Not the 'i' you are looking for.
			wg.Done()
		}()
	}
	wg.Wait()
}
