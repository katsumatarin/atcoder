package main

import (
	"fmt"
)

func main() {
	var a, b, c string
	fmt.Scan(&a, &b, &c)
	fmt.Print(a[:1], b[:1], c[:1])
}
