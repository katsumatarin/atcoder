package main

import (
	"bufio"
	"fmt"
	"os"
)

var sc = bufio.NewScanner(os.Stdin)



func nextLine() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	var n, l int
	fmt.Scan(&n, &l)
	s := nextLine()
	fmt.Println(s)
}
