package main

import "fmt"

type Ente interface {
	fliegen()
	quacken()
}

type StockEnte struct {
	Name string
}

func (e StockEnte) quaken() {
	fmt.Println("Quak")
}

func (e StockEnte) fliegen() {
	fmt.Println("Ich fliege")
}

func (e StockEnte) String() string {
	return fmt.Sprintf("Ich bin Stockente %s", e.Name)
}

//========================================

type WildEnte struct {
	Name string
}

func (e WildEnte) quaken() {
	fmt.Println("Quak")
}

func (e WildEnte) fliegen() {
	fmt.Println("Ich fliege weiter")
}

func (e WildEnte) String() string {
	return fmt.Sprintf("Ich bin Wildente %s", e.Name)
}

//========================================

type Truthahn interface {
	fliegen()
	kollern()
}

type WildTruthahn struct {
	Name string
}

func (t WildTruthahn) fliegen() {
	fmt.Println("Ich fliege nur kurze Strecken")
}

func (t WildTruthahn) kollern() {
	fmt.Println("Koller Koller")
}

func (t WildTruthahn) String() string {
	return fmt.Sprintf("Ich bin der WildTruthahn %s", t.Name)
}

//========================================

type TruthahnAdapter struct {
	trudi Truthahn
}

func (t TruthahnAdapter) fliegen() {
	for i := 0; i < 5; i++ {
		t.trudi.fliegen()
	}
}

func (t TruthahnAdapter) quaken() {
	t.trudi.kollern()
}

func (t TruthahnAdapter) String() string {
	return fmt.Sprintf("%s im Adapter", t.trudi)
}

//========================================

func main() {
	var s = StockEnte{Name: "Horst"}
	var w = WildTruthahn{Name: "Erna"}
	t := TruthahnAdapter{trudi: w}

	fmt.Println(s)
	s.fliegen()
	s.quaken()
    fmt.Println("\n")
	fmt.Println(t)
	t.fliegen()
	t.quaken()

}
