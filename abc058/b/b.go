package main

import (
	"fmt"
)

func main() {
	var a, b string
	fmt.Scan(&a, &b)
	if len(a) == len(b) {
		for i := 0; i < len(b); i++ {
			fmt.Print(a[i : i+1])
			fmt.Print(b[i : i+1])
		}
	} else {
		for i := 0; i < len(b); i++ {
			fmt.Print(a[i : i+1])
			fmt.Print(b[i : i+1])
		}
		fmt.Print(a[len(a)-1:])
	}
	fmt.Print("\n")
}
