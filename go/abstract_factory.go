package main

import "fmt"

//=========================================

type ISpaceShipFactory interface {
	CreateSpaceShip(string, int, int, int, string)
}

type SpaceShuttleFactory struct {
	ID string
}

func (s SpaceShipFactory) CreateSpaceShip(name string, speed int, damage int) {
	s.newSpaceShip(name, speed, damage)
}



func (s SpaceShuttleFactory) newSpaceShuttle(name string, speed int, damage int, lugage string) SpaceShuttle {
	return SpaceShuttle{SpaceShip: SpaceShip{Name: name, Speed: speed, Damage: damage}, Lugage: lugage}
}


func (s SpaceShuttleFactory) CreateSpaceShip(name string, speed int, damage int, lugage string) {
	s.newSpaceShuttle(name, speed, damage,lugage)
}


type SpaceShipFactory struct {
	ID string
}

func (s SpaceShipFactory) newSpaceShip(name string, speed int, damage int) SpaceShip {
	return SpaceShip{Name: name, Speed: speed, Damage: damage}
}

//=========================================

type IWeaponFactory interface {
	CreateWeapon()
}


type IWeapon interface {
	shoot()
}

type LaserCanon struct {
	Name   string
	Damage int
	Range  int
}

func (l LaserCanon) shoot() {
	fmt.Println("zawusch")
}

type PlasmaBomb struct {
	Name   string
	Damage int
	Range  int
}

func (p PlasmaBomb) shoot() {
	fmt.Println("Plop....Boooooooom")
}

//=========================================

type ISpaceShip interface {
	fly()
	attack()
}

type SpaceShip struct {
	Name   string
	Speed  int
	Damage int
	weapon IWeapon
}

func (s SpaceShip) fly() {
	fmt.Println("zoooooommmmm")
}

func (s SpaceShip) attack() {
	s.weapon.shoot()
}

func NewSpaceShip(name string, speed int, damage int) SpaceShip {
	return SpaceShip{Name: name, Speed: speed, Damage: damage}
}

func (s SpaceShip) String() string {
	return fmt.Sprintf("\nName: \t\t%s\nSpeed: \t\t%d\nDamage: \t%d", s.Name, s.Speed, s.Damage)
}

type SpaceShuttle struct {
	SpaceShip
	Lugage     string
	weapon     IWeapon
}

func NewSpaceShuttle(name string, speed int, damage int, lugage string) SpaceShuttle {
	return SpaceShuttle{SpaceShip: SpaceShip{Name: name, Speed: speed, Damage: damage}, Lugage: lugage}
}

func (s SpaceShuttle) fly() {
	fmt.Println("brrooooommmm")
}

func (s SpaceShuttle) attack() {
	s.weapon.shoot()
}

func (s SpaceShuttle) String() string {
	return fmt.Sprintf("\nName: \t\t%s\nSpeed: \t\t%d\nDamage: \t%d\nLugage: \t%s\n", s.Name, s.Speed, s.Damage, s.Lugage)
}

//=========================================

func main() {

	// direct instances
	var s = NewSpaceShip("X-Fighter", 100, 200)
	fmt.Println(s)

	var h = NewSpaceShuttle("Apollo", 200, 700, "Satellite")
	fmt.Println(h)

	// lets use a factory

}
