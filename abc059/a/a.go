package main

import (
	"fmt"
	"strings"
)

func main() {
	var a, b, c string
	fmt.Scan(&a, &b, &c)
	fmt.Println(strings.ToUpper(a[:1]) + strings.ToUpper(b[:1]) + strings.ToUpper(c[:1]))
}
