package main

import (
	"fmt"
)

func main() {
	st := "get_t_user_info"
	var seed uint64 = 0
	var magicNumber uint64 = 0x9e3779b9
	for _, s := range st {
		seed ^= uint64(s) + magicNumber + (seed << 6) + (seed >> 2)
		fmt.Println("--", seed, s)
	}

	fmt.Println(st, seed, uint16(seed))
}
