#include "coffee.h"

class CondimentsDecorator : public Coffee
{
public:
    string getDescription();
};

class Whip : public CondimentsDecorator
{
    Coffee *coffee;

public:
    Whip(Coffee *coffee)
    {
        this->coffee = coffee;
    }
    string getDescription()
    {
        return coffee->getDescription() + ", Whip";
    }
    double cost()
    {
        return .10 + coffee->cost();
    }
};

class Milk : public CondimentsDecorator
{
    Coffee *coffee;

public:
    Milk(Coffee *coffee)
    {
        this->coffee = coffee;
    }
    string getDescription()
    {

        return coffee->getDescription() + ", Milk";
    }
    double cost()
    {
        return .5 + coffee->cost();
    }
};

class Soy : public CondimentsDecorator
{
    Coffee *coffee;

public:
    Soy(Coffee *coffee)
    {
        this->coffee = coffee;
    }
    string getDescription()
    {
        return coffee->getDescription() + ", Soy";
    }
    double cost()
    {
        return .15 + coffee->cost();
    }
};

class Mocha : public CondimentsDecorator
{
    Coffee *coffee;

public:
    Mocha(Coffee *coffee)
    {
        this->coffee = coffee;
    }
    string getDescription()
    {
        return coffee->getDescription() + ", Mocha";
    }
    double cost()
    {
        return .25 + coffee->cost();
    }
};