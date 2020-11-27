package main

import "fmt"

type IMonster interface {
	clone() IMonster
	getName() string
}

type DefaultMonster struct {
	Name string
	size float32
}

func (m DefaultMonster) String() string {
	return fmt.Sprintf("%s with size %2.1f", m.Name, m.size)
}

func (m DefaultMonster) getName() string {
	return m.Name
}

func NewDefaultMonster() DefaultMonster {
	return DefaultMonster{Name: "Horst", size: 6.5}
}

//============================================================

type BigMonster struct {
	Name string
	size float32
}

func (m BigMonster) String() string {
	return fmt.Sprintf("%s with size %2.1f", m.Name, m.size)
}

func (b BigMonster) clone() IMonster {
	b.Name += " Copy"
	return b
}

func (m BigMonster) getName() string {
	return m.Name
}

func NewBigMonster(name string, size float32) BigMonster {
	return BigMonster{Name: name, size: size}
}

//============================================================

type LittleMonster struct {
	Name string
	size float32
}

func NewLittleMonster(name string, size float32) LittleMonster {
	return LittleMonster{Name: name, size: size}
}

func (m LittleMonster) clone() IMonster {
	m.Name += " Copy"
	return m
}

func (m LittleMonster) getName() string {
	return m.Name
}

func (m LittleMonster) String() string {
	return fmt.Sprintf("%s with size %2.1f", m.Name, m.size)
}

//============================================================
type MonsterRegistry struct {
	Id       string
	Monsters []IMonster
}

func (r *MonsterRegistry) getMonster(s string) IMonster {

    var m IMonster
	switch b := s; b {
	case "big":
		var m IMonster = &NewBigMonster("BigMonster", 12.5)
		r.Monsters = append(r.Monsters, m)
		return m
	case "small":
		var m IMonster = &NewLittleMonster("SmallMonster", 5.5)
		r.Monsters = append(r.Monsters, m)
		return m
	case "copy big":
		for _, v := range r.Monsters {
			if v.getName() == "BigMonster" {
				return v.clone()
			}
		}
	case "copy small":
		for _, v := range r.Monsters {
			if v.getName() == "SmallMonster" {
				return v.clone()
			}
		}
	default:
		fmt.Printf("got %s\n", s)
		m = NewBigMonster("BigMonster",8.8)
	}
    return m
}

func (r MonsterRegistry) String() string {
	return fmt.Sprintf("Welcome at Monster AG with Monsters: %s", r.Monsters)
}

//============================================================

func main() {
	fmt.Println("Welcome to the monster prototype fabric")
	var r MonsterRegistry = MonsterRegistry{Id: "MonsterAG"}
	fmt.Println(r)
	var b IMonster = r.getMonster("big")
    var d IMonster = r.getMonster("small")
    fmt.Printf("Monster created:\n%s %p\n%s %p\n",b,&b,d,&d)

    //fmt.Printf("%s with id %p\n",b.getName(),&b)
	fmt.Println(r)

	var c IMonster = r.getMonster("copy big")
    fmt. Printf("%s and id %p\n",c,&c)

    var breat []IMonster
    for i := 0; i<=10; i++{
        var t IMonster
        if i%2 == 0{
            t = r.getMonster("copy big")
            fmt.Println(t)
        }else{
            t = r.getMonster("copy small")
            fmt.Println(t)
        }
        breat = append(breat,t)
    }
    for i,mon := range breat{
        fmt.Printf("Monster Nr.%d named %s with id %p\n",i,mon,&mon)
    }
}
