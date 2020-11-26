package main

import "fmt"

func main() {
	var a, b, c string
	fmt.Scan(&a, &b, &c)
	if a[len(a)-1:len(a)] == b[:1] && b[len(b)-1:len(b)] == c[:1] {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
