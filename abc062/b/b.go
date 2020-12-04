package main

import (
	"fmt"
	"strings"
)

func main() {
	var h, w int
	var a string
	var slice []string
	s := "#"
	fmt.Scan(&h, &w)
	for i := 0; i < h; i++ {
		fmt.Scan(&a)
		slice = append(slice, s + a + s)
	}
	fmt.Println(strings.Repeat(s,w+2))
	fmt.Println(strings.Join(slice,"\n"))
	fmt.Println(strings.Repeat(s,w+2))
}