package main

import (
	"fmt"
)

//------------------------------------------

type IObserver interface {
	Update()
}

type ISubject interface {
	Attach(observer Observer)
	Detach(observer Observer)
	Notify()
}

type Subject struct {
	observers []Observer
}

func (s *Subject) Attach(observer Observer) {
    fmt.Println("pre s in attach",s)
    fmt.Println("to attach observer",observer)
	s.observers = append(s.observers, observer)
    fmt.Println("post s in attach",s)
	fmt.Println("attached")
}

func (s *Subject) Detach(observer Observer) {
	fmt.Println("Detach on Subject: ", s)
    fmt.Println("Subject.observers",s.observers)
	for i := range s.observers {
        fmt.Println("observers[i].id:",s.observers[i].id)
        fmt.Println("obs.id:",observer.id)
		if s.observers[i].id == observer.id {
			fmt.Println("found at",i)
			s.observers = append(s.observers[:i], s.observers[i+1:]...)
            fmt.Println(s.observers)
			break
		}
		fmt.Println("not found")
	}

	//delete(s.observers, observer.id)
	fmt.Println(s.observers)
}

func (s Subject) Notify() {
	for _, v := range s.observers {
		v.Update()
	}
}

type Observer struct {
	id      string
	Subject Subject
}

func (o Observer) Update() {
	fmt.Printf("%s got update\n", o.id)
}

//------------------------------------------

type MailManager struct {
	Subject
}

func (m MailManager) getState() string {
	num := len(m.Subject.observers)
	return fmt.Sprintf("Have %d followers", num)
}

func NewMailManager() MailManager {
	m := MailManager{Subject{make([]Observer, 0)}}
	return m
}

//------------------------------------------

type MailRecipient struct {
	Observer
}

func NewMailRecipient(s *Subject, id string) MailRecipient {
    fmt.Println("s:",s)
    m := MailRecipient{Observer{id: id,Subject: *s}}
    fmt.Println("in NewMailRecipient:",m)
	s.Attach(m.Observer)
	return m
}

func (m MailRecipient) DetachMailRecipient(s *Subject){
    s.Detach(m.Observer)
}

//------------------------------------------

func main() {
	fmt.Println("Obsever Pattern")

	mailer := NewMailManager()
	fmt.Println(mailer.getState())

	r1 := NewMailRecipient(&mailer.Subject, "info@mymail.com")
	r2 := NewMailRecipient(&mailer.Subject, "buster@ghost.org")
	r3 := NewMailRecipient(&mailer.Subject, "funky@ghost.org")
	r4 := NewMailRecipient(&mailer.Subject, "newobserver@space.org")

    fmt.Println("Subject")
    fmt.Println(mailer)

    fmt.Println("Observer Objects:")
    fmt.Println(r1)
    fmt.Println(r2)
    fmt.Println(r3)
    fmt.Println(r4)

	fmt.Println(mailer.getState())

    //mailer.Detach(r3.Observer)
    //r2.DetachMailRecipient(&mailer.Subject)
    //fmt.Println("r2 subject: ",r2.Subject)
    r3.Subject.Detach(r3.Observer)

	mailer.Notify()
}
