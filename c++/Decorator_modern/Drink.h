#ifndef DRINK_HEADER_H
#define DRINK_HEADER_H

#include<string>

class Drink{

  public:
    Drink();
    ~Drink() = default;
    virtual std::string getDescription() const;
    virtual double prize() const = 0;

    protected:
      std::string description;

};

#endif