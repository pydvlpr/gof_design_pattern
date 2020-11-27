package main

import "fmt"
import "./singleton"

func main() {
	fmt.Println("Test Singleton in main")
	s :=  singleton.GetInstance()
    fmt.Printf("%s: %p\n",s,s)
    b := singleton.GetInstance()
    fmt.Printf("%s: %p\n",b,b)
}
