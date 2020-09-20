package main

import (
	"bufio"
	"fmt"
	"os"
)

var sc = bufio.NewScanner(os.Stdin)




func main() {
	var n, l int
	var s[100] string
	fmt.Scan(&n, &l)
	for i := 0; i < n; i++{
		fmt.Scan(&s[i])
	}

	for i := 0; i < n; i++{
		fmt.Printf("%s\n", s[i])
	}
}
