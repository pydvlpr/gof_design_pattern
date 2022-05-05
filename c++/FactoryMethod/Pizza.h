#ifndef PIZZA_HEADER_H
#define PIZZA_HEADER_H

#include<iostream>
#include<string>
#include<vector>


class Pizza{
  public:
    Pizza(){}
    ~Pizza() = default;
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
    
    void preperation() const;
    void backing() const;
    void cutting() const;
    void packing() const;
    std::string getName() const;
};

#endif