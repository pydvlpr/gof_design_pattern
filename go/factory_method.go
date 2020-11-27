package main

import "fmt"

type CakeFactory interface {
	createCake(s string)
}

type Cake interface {
	String() string
}

type cake struct{
    name string
}

func (c cake) String() string{
    return c.name
}

//==============================================
type BrownieFactory struct {
	Name string
}

func (c BrownieFactory) createCake() Brownie {
	return *NewBrownie()
}

type Brownie struct {
	Name string
}

func (b Brownie) String() string {
	return b.Name
}

func NewBrownie() *Brownie {
	return &Brownie{Name: "A Brownie"}
}

//==============================================

type OatsCakeFactory struct {
	Name string
}

func (o OatsCakeFactory) createCake() OatsCake {
	return *NewOatsCake()

}

type OatsCake struct {
	Name string
}

func (o OatsCake) String() string {
	return o.Name
}

func NewOatsCake() *OatsCake {
	return &OatsCake{Name: "A OatsCake"}
}

//==============================================


type UniversalCakeFactory struct{
    Name string
}

func (u UniversalCakeFactory) createCake(s string) Cake {
    switch  s {
    case "Brownie": return cake{name: "I am a Brownie"}
    case "OatsCake": return cake{name: "I am a OatsCake"}

    }
    return cake{name: "Suprise, Suprise"}

}


//==============================================

func main() {
	fmt.Println("Welcome in our Factory")
	bf := new(BrownieFactory)
	bf.Name = "Brownie Factory"
	brownie := bf.createCake()

	of := new(OatsCakeFactory)
	of.Name = "OatsCake Factory"
	oatscake := of.createCake()

    u := new(UniversalCakeFactory)
    b := u.createCake("Brownie")
    o := u.createCake("OatsCake")
    r := u.createCake("")

	fmt.Println(brownie)
	fmt.Println(oatscake)
    fmt.Println(b)
    fmt.Println(o)
    fmt.Println(r)
}
