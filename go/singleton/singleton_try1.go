package main

/*
   Singleton as struc does not work in go. You cannot hold a static/global struct-variable
*/

import "fmt"

type singleton struct {
	Name     string
	instance *singleton
}

func (s *singleton) GetInstance() *singleton {
	if s.instance == nil {
		s.instance = &singleton{}
	} else {
		fmt.Println("There's only one.")
	}
	return s.instance
}

func (s *singleton) String() string {
	s.Name = fmt.Sprintf("Singleton %p", s)
	return s.Name
}

func NewSingleton() *singleton {
	var s = &singleton{}
	s.GetInstance()
	return s
}

//=========================================

var lone *singleton

func main() {
	fmt.Println("Welcome to Singleton")

	lone = NewSingleton()
	fmt.Println(einzig)
	lone = NewSingleton()
	fmt.Println(einzig)

}
