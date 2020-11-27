package main

import "fmt"

type Command interface {
	run()
}

type Light struct {
    Name string
}

func (l Light) on() {
	fmt.Println("Es läuchtet hell.")
}

func (l Light) off() {
	fmt.Println("Nun ist es wieder dunkel.")
}

func (l Light) String() string{
    return l.Name
}

//====

type LightControlOn struct {
	light Light
}

func (l *LightControlOn) run() {
	l.light.on()
}

func NewLightControlOn(l Light) *LightControlOn{
    return &LightControlOn{light: l}

}

func (l *LightControlOn) String() string{
    return fmt.Sprintf("%s On",l.light.Name)
}

type LightControlOff struct {
	light Light
}

func (l *LightControlOff) run() {
	l.light.off()
}

func NewLightControlOff(l Light) *LightControlOff{
    return &LightControlOff{light: l}

}

func (l *LightControlOff) String() string{
    return fmt.Sprintf("%s Off",l.light.Name)
}

//====

type PadPosition struct{
    command Command
}

type ControlPad struct{
    Name string
    PadPos []PadPosition
}

func (c *ControlPad) setCommand(command Command, pos int ){
    c.PadPos[pos].command = command
}

func (c *ControlPad) pressTheButton(pos int){
    c.PadPos[pos].command.run()
}

func NewControlPad(name string, buttons int) ControlPad{
    s := make([]PadPosition,buttons)
    cp := ControlPad{Name: name, PadPos: s}
    return cp
}

func (c ControlPad) String() string{
    return fmt.Sprintf("%s: %s",c.Name,c.PadPos)
}

//====

func main() {
    fmt.Println("Welcome to the LightHouse")
    p := NewControlPad("Fernbedienung",10)
    l := Light{Name: "Taschenlampe"}
    var lcr Command = NewLightControlOn(l)
    var lcs Command = NewLightControlOff(l)
    fmt.Printf("Wir haben hier eine %s mit %s die %d Tasten belegen kann\n\n",l.Name,p.Name,len(p.PadPos))

    fmt.Println("Programmiere die Fernbedienung")
    p.setCommand(lcr, 0)
    p.setCommand(lcs, 1)
    fmt.Printf("Button 1: %p %s\n",lcr,lcr)
    fmt.Printf("Button 2: %p %s\n",lcs,lcs)
    //fmt.Println(p)
    fmt.Println()

    fmt.Printf("Press Button 1 (%p:%s): => ",lcr,lcr)
    p.pressTheButton(0)
    fmt.Printf("Press Button 2 (%p:%s): => ",lcs,lcs)
    p.pressTheButton(1)




}
