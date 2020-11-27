package singleton

/*

   Singleton implenmented as package with package wide
   instance variable to hold single object.

*/

import "fmt"

type singleton struct {
	name string
}

func (s singleton) String() string {
	return fmt.Sprintf("Singleton %s", s.name)
}

var instance *singleton

func GetInstance() *singleton {
	if instance == nil {
		fmt.Println("instance is nil")
		instance = &singleton{name: "*only_instanz*"}
	} else {
		fmt.Println("instance not nil")
	}
	return instance
}
