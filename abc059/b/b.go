package main

import (
	"fmt"
	"strconv"
)

func main() {
	var a, b string
	var sa, sb int
	var ia, ib int
	fmt.Scan(&a, &b)
	if len(a) != len(b) {
		if len(a) > len(b) {
			fmt.Print("GREATER\n")
		} else {
			fmt.Print("LESS\n")
		}
	} else {
		for i := 0; i < len(a); i++ {
			sa, _ = strconv.Atoi(a[i : i+1])
			sb, _ = strconv.Atoi(b[i : i+1])
			ia, _ = strconv.Atoi(a)
			ib, _ = strconv.Atoi(b)
			if sa > sb {
				fmt.Print("GREATER\n")
				break
			} else if sa < sb {
				fmt.Print("LESS\n")
				break
			} else if ia == ib {
				fmt.Print("EQUAL\n")
				break
			}
		}
	}
}
