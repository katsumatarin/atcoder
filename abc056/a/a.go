package main

import "fmt"

func main() {
	var a, b string
	fmt.Scan(&a, &b)
	if a == "H" {
		fmt.Println(b)
	} else {
		if b == "H" {
			fmt.Println("D")
		} else {
			fmt.Println("H")
		}
	}
}
