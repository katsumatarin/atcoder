package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	if a == b && b == c {
		fmt.Println("1")
	} else if a != b && b!= c && a != c {
		fmt.Println("3")
	} else {
		fmt.Println("2")
	}
}
