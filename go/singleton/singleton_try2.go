package main

/*
	Singleton with global variable holding the singleton works.
*/

import "fmt"

type singleton struct {
	name string
}

var instance *singleton

func GetSingleton() *singleton {
	if instance == nil {
		instance = &singleton{name: "*only_instance*"}
	} else {
		fmt.Println("There's only one.")
	}
	return instance
}

func (s *singleton) String() string {
	return fmt.Sprintf("Singleton %s", s.name)
}

func main() {
	fmt.Println("A Singleton")
	s := GetSingleton()
	fmt.Printf("%s: %p\n", s, s)
	b := GetSingleton()
	fmt.Printf("%s: %p\n", b, b)

}
