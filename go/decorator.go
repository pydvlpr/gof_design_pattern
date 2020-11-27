package main

import "fmt"

//================================================
// Interface

type IDrink interface {
	getDescription() string
	getPreis() float32
}

//================================================
// Base Structs
type Drink struct {
	description string
	prize       float32
}

func (d Drink) getDescription() string {
	return d.description
}

func (d Drink) getPreis() float32 {
	return d.prize
}

func NewDrink() *Drink {
	return &Drink{description: "unknown drink"}
}

func (d *Drink) String() string{
    return d.getDescription()
}

//================================================
// ingredients 

// CHOCO
type Choco struct {
	IDrink
}

func (c *Choco) getDescription() string {
	return fmt.Sprintf("%s, Choco", c.IDrink.getDescription())
}

func (c *Choco) getPreis() float32 {
	return 0.20 + c.IDrink.getPreis()
}

func NewChoco(drink IDrink) *Choco {
	return &Choco{IDrink: drink}

}

func (c *Choco) String() string{
    return c.getDescription()
}

// CREAM
type Cream struct {
	IDrink
}

func (c *Cream) getDescription() string {
	return fmt.Sprintf("%s, Cream", c.IDrink.getDescription())
}

func (c *Cream) getPreis() float32 {
	return 0.30 + c.IDrink.getPreis()
}

func NewCream(drink IDrink) *Cream {
	return &Cream{IDrink: drink}

}

func (c *Cream) String() string{
    return c.getDescription()
}

// MILK
type Milk struct {
	IDrink
}

func (c *Milk) getDescription() string {
	return fmt.Sprintf("%s, Milk", c.IDrink.getDescription())
}

func (c *Milk) getPreis() float32 {
	return 0.15 + c.IDrink.getPreis()
}

func NewMilk(drink IDrink) *Milk {
	return &Milk{IDrink: drink}

}

func (c *Milk) String() string{
    return c.getDescription()
}

// SOJA
type Soja struct {
	IDrink
}

func (c *Soja) getDescription() string {
	return fmt.Sprintf("%s, Soja", c.IDrink.getDescription())
}

func (c *Soja) getPreis() float32 {
	return 0.25 + c.IDrink.getPreis()
}

func NewSoja(drink IDrink) *Soja {
	return &Soja{IDrink: drink}

}

func (c *Soja) String() string{
    return c.getDescription()
}


//================================================
/* Coffees as base for every composition
   interface-methode must not be implemented,
   this is done already by dring object.
*/

type Espresso struct {
	Drink
}

func NewEspresso() *Espresso {
	return &Espresso{Drink{description: "Espresso", prize: 1.99}}

}

type HouseMix struct {
	Drink
}

func NewHouseMix() *HouseMix {
	return &HouseMix{Drink{description: "HouseMix", prize: 0.89}}
}


//================================================

func main() {
	fmt.Println("Welcome in Decorator")

    // espresso double choc cream
    var d IDrink = NewEspresso()
    fmt.Println(d)
    fmt.Println(d.getPreis())

    d = NewChoco(d)
    fmt.Println(d)
    fmt.Println(d.getPreis())

    d = NewCream(d)
    fmt.Println(d)
    fmt.Println(d.getPreis())

    d = NewChoco(d)
    fmt.Println(d)
    fmt.Println(d.getPreis())

    // HouseMix Milk Choc Cream
    var h IDrink = NewHouseMix()
    fmt.Println(h)
    fmt.Println(h.getPreis())

    h = NewMilk(h)
    fmt.Println(h)
    fmt.Println(h.getPreis())

    h = NewChoco(h)
    fmt.Println(h)
    fmt.Println(h.getPreis())

    h = NewCream(h)
    fmt.Println(h)
    fmt.Println(h.getPreis())
}
