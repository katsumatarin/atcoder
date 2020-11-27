package main

import (
	"fmt"
	"strings"
)

func main() {
	var a, b, c string
	var flg int
	fmt.Scan(&a, &b, &c)
	for {
		if flg == 0 {
			if a == "" {
				fmt.Println("A")
				return
			} else if a[:1] == "a" {
				flg = 0
			} else if a[:1] == "b" {
				flg = 1
			} else {
				flg = 2
			}
			a = strings.Replace(a, a[:1], "", 1)
		} else if flg == 1 {
			if b == "" {
				fmt.Println("B")
				return
			} else if b[:1] == "a" {
				flg = 0
			} else if b[:1] == "b" {
				flg = 1
			} else {
				flg = 2
			}
			b = strings.Replace(b, b[:1], "", 1)
		} else if flg == 2 {
			if c == "" {
				fmt.Println("C")
				return
			} else if c[:1] == "a" {
				flg = 0
			} else if c[:1] == "b" {
				flg = 1
			} else {
				flg = 2
			}
			c = strings.Replace(c, c[:1], "", 1)
		}
	}
}
