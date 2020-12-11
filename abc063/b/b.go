package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	w := []string{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
	fmt.Scan(&s)
	for i := 0; i < len(w); i++ {
		if strings.Count(s, w[i]) >= 2 {
			fmt.Println("no")
			return
		}
	}
	fmt.Println("yes")
}
