# README

This dir contains programs used to understand at a high-level the go compiler (gc). Please read https://github.com/golang/go/tree/master/src/cmd/compile first to understand gc internals.

Source: https://getstream.io/blog/how-a-go-program-compiles-down-to-machine-code/

All programs are operating on the example program, helloworld.go. The code is shown below:

```go
package main

import "fmt"

func main() {
    fmt.Println("Hello, world!")
}
```

# Contents

- `helloworld.go` is the example program.
- `tokenize.go` prints to STDOUT the tokens parsed from the example program.
- `ast.go` prints to STDOUT the abstract syntax tree generated from the example program. Note, that the AST definition used is provided in the package `go/ast`.
- `ssa.sh` generates the SSA form of the example program, creating a file `ssa.html`. This file shows the results of all of the SSA passes on the SSA generated from the AST.

