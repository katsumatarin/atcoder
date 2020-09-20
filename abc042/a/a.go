package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	if a + b + c == 17 {
		if a == 5 && b == 5 {
			fmt.Println("YES")
		} else if b == 5 && c == 5 {
			fmt.Println("YES")
		} else if a == 5 && c == 5 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	} else {
		fmt.Println("NO")
	}
}
