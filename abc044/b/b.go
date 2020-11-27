package main

import (
	"fmt"
	"strings"
)

func main() {
	var w string
	s := []string{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
	fmt.Scan(&w)
	for i := 0; i < len(s); i++ {
		if strings.Count(w, s[i])%2 != 0 {
			fmt.Println("No")
			return
		}
	}
	fmt.Println("Yes")
}
