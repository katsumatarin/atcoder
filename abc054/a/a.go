package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if a == b {
		fmt.Println("Draw")
	} else if ( a == 1 && b != 1 ) || ( b != 1 && a > b ) {
		fmt.Println("Alice")
	} else if ( b == 1 && a != 1 ) || ( a != 1 && b > a ) {
		fmt.Println("Bob")
	}
}
