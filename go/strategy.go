package main

import "fmt"

type FlugVerhalten interface {
	fliegen()
}

//----------------------------------------------------------
type FliegtSuperSchnell struct {
}

func (fs FliegtSuperSchnell) fliegen() {
	fmt.Println("Ich fliege super schnell")
}

func NewFliegtSuperSchnell() FliegtSuperSchnell {
	var fv FliegtSuperSchnell = FliegtSuperSchnell{}
	return fv
}
//----------------------------------------------------------

type KannNichtFliegen struct {
}

func (fs KannNichtFliegen) fliegen() {
	fmt.Println("Ich kann nicht fliegen.")
}

func NewKannNichtFliegen() KannNichtFliegen {
	var fv KannNichtFliegen = KannNichtFliegen{}
	return fv
}


//----------------------------------------------------------

type StockentenFlug struct {
}

func (fs StockentenFlug) fliegen() {
	fmt.Println("Flap Flap Flaaaap")
}

func NewStockentenFlug() StockentenFlug {
	var fv StockentenFlug = StockentenFlug{}
	return fv
}

//----------------------------------------------------------

type IDuck interface{
    anzeigen()
}

type Duck struct {
	Name string
	// muss dynamisch konkrete Instanz erhalten
	flugVerhalten FlugVerhalten
}

func NewDuck(name string) Duck {
	var d Duck = Duck{Name: name}
    fmt.Println("Neue Ente: ",d.Name)
	return d
}

// konkrete Struct mit Funktion fliegen implementieren und deren instanz dann hierhin übergeben
func (d *Duck) setFlugVerhalten(fv FlugVerhalten) {
	d.flugVerhalten = fv
}

func (d Duck) tuFliegen() {
	d.flugVerhalten.fliegen()
}

func (d Duck) anzeigen(){
    fmt.Println("Sieht aus wie eine Ente.")
}

//----------------------------------------------------------

type Stockente struct{
    Duck
}

func NewStockente(name string) Stockente {
	var s Stockente = Stockente{Duck{Name: name}}
    fmt.Println("Neue Ente: ",s.Name)
	return s
}

func (s Stockente) anzeigen(){
    fmt.Println("Sieht aus wie eine Stockente.")
}

func (s Stockente) tuFliegen(){
    s.flugVerhalten.fliegen()
}

//----------------------------------------------------------

func main() {
	fmt.Println("Hauptprogramm")

	var d Duck = NewDuck("SpeedEnte")
	var fv FlugVerhalten = NewFliegtSuperSchnell()
    d.anzeigen()
	d.setFlugVerhalten(fv)
	d.tuFliegen()

    fmt.Println()
    var d2 Duck = NewDuck("ModellEnte")
    var fv2 FlugVerhalten = NewKannNichtFliegen()
    d2.anzeigen()
    d2.setFlugVerhalten(fv2)
    d2.tuFliegen()

    fmt.Println()
    var d3 Stockente = NewStockente("Horst Stock")
    var fv3 FlugVerhalten = NewStockentenFlug()
    d3.anzeigen()
    d3.setFlugVerhalten(fv3)
    d3.tuFliegen()


	//d.tuFliegen()
	//fmt.Println(s)
	//d.tuFliegen()

}
